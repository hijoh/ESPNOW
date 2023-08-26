#include <stdio.h>
#include "esp_wifi.h"
#include "esp_event_loop.h"
#include "esp_now.h"
#include "esp_log.h"

#define ESPNOW_MAC_LEN ESP_NOW_ETH_ALEN

void app_main() {
    // 初始化 Wi-Fi
    esp_err_t result = esp_event_loop_create_default();
    if (result != ESP_OK) {
        ESP_LOGE("ESPNOW", "Failed to create event loop: %d", result);
        return;
    }

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    result = esp_wifi_init(&cfg);
    if (result != ESP_OK) {
        ESP_LOGE("ESPNOW", "Failed to initialize Wi-Fi: %d", result);
        return;
    }

    result = esp_wifi_set_mode(WIFI_MODE_STA);
    if (result != ESP_OK) {
        ESP_LOGE("ESPNOW", "Failed to set Wi-Fi mode: %d", result);
        return;
    }

    result = esp_wifi_start();
    if (result != ESP_OK) {
        ESP_LOGE("ESPNOW", "Failed to start Wi-Fi: %d", result);
        return;
    }

    // 获取 MAC 地址
    uint8_t mac[ESPNOW_MAC_LEN];
    result = esp_wifi_get_mac(ESP_IF_WIFI_STA, mac);
    if (result != ESP_OK) {
        ESP_LOGE("ESPNOW", "Failed to get MAC address: %d", result);
        return;
    }

    ESP_LOGI("ESPNOW", "MAC address: %02X:%02X:%02X:%02X:%02X:%02X",
             mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);

    // 停止 Wi-Fi
    esp_wifi_stop();
}