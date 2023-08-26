#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "lv_examples/src/lv_demo_widgets/lv_demo_widgets.h"
#include "lv_examples/src/lv_demo_music/lv_demo_music.h"
#include "lv_examples/src/lv_demo_benchmark/lv_demo_benchmark.h"
#include "lvgl_helpers.h"
#include "esp_freertos_hooks.h"
#include "gui_task.h"
#include "ui.h"
#include "../lvgl/lvgl.h"
#include "esp_err.h"
#include "esp_log.h"

static void lv_tick_task(void *arg)
{
   (void)arg;
   lv_tick_inc(10);
}
SemaphoreHandle_t xGuiSemaphore;

void gui_task(void *arg)
{
   xGuiSemaphore = xSemaphoreCreateMutex();// 创建互斥信号量，用于保护lvgl相关函数的访问
   lv_init();          // lvgl内核初始化
   lvgl_driver_init(); // lvgl显示接口初始化

   /* Example for 1) */
   static lv_disp_draw_buf_t draw_buf;

   lv_color_t *buf1 = heap_caps_malloc(DISP_BUF_SIZE * 2, MALLOC_CAP_DMA);
   lv_color_t *buf2 = heap_caps_malloc(DISP_BUF_SIZE * 2, MALLOC_CAP_DMA);

   // lv_color_t *buf1 = (lv_color_t *)heap_caps_malloc(DISP_BUF_SIZE * 2, MALLOC_CAP_SPIRAM | MALLOC_CAP_8BIT);
   // lv_color_t *buf2 = (lv_color_t *)heap_caps_malloc(DISP_BUF_SIZE * 2, MALLOC_CAP_SPIRAM | MALLOC_CAP_8BIT);

   lv_disp_draw_buf_init(&draw_buf, buf1, buf2, DLV_HOR_RES_MAX * DLV_VER_RES_MAX); // 初始化显示缓冲区

   static lv_disp_drv_t disp_drv;         // 显示驱动结构体，必须为静态或全局变量
   lv_disp_drv_init(&disp_drv);           /*Basic initialization*/
   disp_drv.draw_buf = &draw_buf;         /*Set an initialized buffer*/
   disp_drv.flush_cb = disp_driver_flush; // 设置刷新回调函数以绘制到显示设备
   disp_drv.hor_res = 320;                /*Set the horizontal resolution in pixels*/
   disp_drv.ver_res = 240;                /*Set the vertical resolution in pixels*/
   lv_disp_drv_register(&disp_drv);       /*Register the driver and save the created display objects注册驱动程序并保存创建的显示对象*/
   
    /*以下是触摸屏输入接口配置*/
   lv_indev_drv_t indev_drv;
   lv_indev_drv_init(&indev_drv);
   indev_drv.read_cb = touch_driver_read;
   indev_drv.type = LV_INDEV_TYPE_POINTER;
   lv_indev_drv_register(&indev_drv);

   // esp_register_freertos_tick_hook(lv_tick_task);

   /* 创建一个定时器中断来进入 lv_tick_inc 给lvgl运行提供心跳 这里是10ms一次 主要是动画运行要用到 */
   const esp_timer_create_args_t periodic_timer_args = {
       .callback = &lv_tick_task,
       .name = "periodic_gui"};
   esp_timer_handle_t periodic_timer;
   ESP_ERROR_CHECK(esp_timer_create(&periodic_timer_args, &periodic_timer));
   ESP_ERROR_CHECK(esp_timer_start_periodic(periodic_timer, 10 * 1000));

   ui_init();
   // lv_demo_widgets();
   //    lv_demo_music();
   // lv_demo_benchmark();
   while (1)
   {
      /* Delay 1 tick (assumes FreeRTOS tick is 10ms */
      vTaskDelay(pdMS_TO_TICKS(10));

      /* Try to take the semaphore, call lvgl related function on success */
      if (pdTRUE == xSemaphoreTake(xGuiSemaphore, portMAX_DELAY))
      {
         lv_timer_handler();
         xSemaphoreGive(xGuiSemaphore);
      }
   }
}