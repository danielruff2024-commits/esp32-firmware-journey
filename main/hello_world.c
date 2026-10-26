#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    int counter = 0;
    while(1) {
        printf("[FIRMWARE MATCH] Hello Daniel! Loop Counter: %d\n", counter++);
        vTaskDelay(pdMS_TO_TICKS(1000)); // Delay thread execution for exactly 1 second
    }
}
