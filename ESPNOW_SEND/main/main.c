/*
 * @Descripttion :
 * @version      :
 * @Author       : Kevincoooool
 * @Date         : 2021-09-04 16:11:59
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2023-07-18 18:22:14
 * @FilePath: \3.lvgl_v8\main\main.c
 */
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
#include "espnow_example.h"
#include "nvs_flash.h"

#include "esp_vfs.h"
#include "esp_spiffs.h"
#include "driver/gpio.h"
#include "main.h"
#include "app_speech_srcif.h"
#include "file_manager.h"
#include "esp_log.h"

#define TAG "ESP32S3"

static void SPIFFS_Directory(char *path)
{
    DIR *dir = opendir(path);
    assert(dir != NULL);
    while (true)
    {
        struct dirent *pe = readdir(dir);
        if (!pe)
            break;
        ESP_LOGI(__FUNCTION__, "d_name=%s d_ino=%d d_type=%x", pe->d_name, pe->d_ino, pe->d_type);
    }
    closedir(dir);
}
extern char *Font_buff;

void app_main(void)
{

    xTaskCreatePinnedToCore(gui_task, "gui task", 1024 * 4, NULL, 15, NULL, 1);

    // /*初始化spiffs用于存放字体文件或者图片文件或者网页文件*/
    // ESP_LOGI(TAG, "Initializing SPIFFS");
    // esp_vfs_spiffs_conf_t conf = {
    //     .base_path = "/spiffs",
    //     .partition_label = "storage",
    //     .max_files = 20,
    //     .format_if_mount_failed = false};
    // esp_err_t ret = esp_vfs_spiffs_register(&conf);
    // if (ret != ESP_OK)
    // {
    //     if (ret == ESP_FAIL)
    //         ESP_LOGE(TAG, "Failed to mount or format filesystem");
    //     else if (ret == ESP_ERR_NOT_FOUND)
    //         ESP_LOGE(TAG, "Failed to find SPIFFS partition");
    //     else
    //         ESP_LOGE(TAG, "Failed to initialize SPIFFS (%s)", esp_err_to_name(ret));
    //     return;
    // }
    // /*显示spiffs里的文件列表*/
    // SPIFFS_Directory("/spiffs/");

    // // Initialize NVS
    // esp_err_t ret = nvs_flash_init();
    // if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    // {
    //     ESP_ERROR_CHECK(nvs_flash_erase());
    //     ret = nvs_flash_init();
    // }
    // ESP_ERROR_CHECK(ret);


    //     ESP_LOGI(TAG, "Initializing SPIFFS");
    // esp_vfs_spiffs_conf_t conf = {
    //     .base_path = "/spiffs",
    //     .partition_label = "storage",
    //     .max_files = 20,
    //     .format_if_mount_failed = false};
    // esp_err_t ret = esp_vfs_spiffs_register(&conf);
    // if (ret != ESP_OK)
    // {
    //     if (ret == ESP_FAIL)
    //         ESP_LOGE(TAG, "Failed to mount or format filesystem");
    //     else if (ret == ESP_ERR_NOT_FOUND)
    //         ESP_LOGE(TAG, "Failed to find SPIFFS partition");
    //     else
    //         ESP_LOGE(TAG, "Failed to initialize SPIFFS (%s)", esp_err_to_name(ret));
    //     return;
    // }
    // /*显示spiffs里的文件列表*/
    // SPIFFS_Directory("/spiffs/");

    // // 初始化nvs用于存放wifi或者其他需要掉电保存的东西
    // ret = nvs_flash_init();
    // if (ret == ESP_ERR_NVS_NO_FREE_PAGES)
    // {
    //     ESP_ERROR_CHECK(nvs_flash_erase());
    //     ret = nvs_flash_init();
    // }
    // ESP_ERROR_CHECK(ret);

        ESP_LOGI(TAG, "Initializing SPIFFS");
    esp_vfs_spiffs_conf_t conf = {
        .base_path = "/spiffs",
        .partition_label = "storage",
        .max_files = 20,
        .format_if_mount_failed = false};
    esp_err_t spiffs_ret = esp_vfs_spiffs_register(&conf);
    if (spiffs_ret != ESP_OK)
    {
        if (spiffs_ret == ESP_FAIL)
            ESP_LOGE(TAG, "Failed to mount or format filesystem");
        else if (spiffs_ret == ESP_ERR_NOT_FOUND)
            ESP_LOGE(TAG, "Failed to find SPIFFS partition");
        else
            ESP_LOGE(TAG, "Failed to initialize SPIFFS (%s)", esp_err_to_name(spiffs_ret));
        return;
    }
    /* 显示spiffs里的文件列表 */
    SPIFFS_Directory("/spiffs/");

    // Initialize NVS
    esp_err_t nvs_ret = nvs_flash_init();
    if (nvs_ret == ESP_ERR_NVS_NO_FREE_PAGES || nvs_ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        nvs_ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(nvs_ret);

    example_wifi_init();
    example_espnow_init();
    app_speech_wakeup_init();
}
