#include <stdio.h>
#include "esp_system.h"

void app_main() {
    uint8_t mac[6];
    esp_efuse_mac_get_default(mac);

    printf("ESP32 MAC Address: %02x:%02x:%02x:%02x:%02x:%02x\n",
           mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);

    // You can add your application logic here
}
