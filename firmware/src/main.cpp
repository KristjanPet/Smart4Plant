#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

static const char* TAG = "main";

extern "C" void app_main(void) {
    ESP_LOGI(TAG, "Smart4plant starting....");

    while (true){
        ESP_LOGI(TAG, "Up and running on FreeRTOS!");
        vTaskDelay(pdMS_TO_TICKS(1000)); //1 second
    }
    
}