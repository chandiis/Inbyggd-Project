/*
 * tasks.c
 *
 *  Created on: 9 Dec 2025
 *      Author: kaur_
 */

#include <stdint.h>
#include "stm32l4xx_hal.h"
#include "spi.h"
#include "FreeRTOS.h"
#include "gpio.h"
#include "functions.h"
#include <stdbool.h>
#include "leds.h"

/*void PedestrianIndicatorTask(void *params){
    uint8_t leds[3] = {0b0, 0b0, 0b0};

    while(1){
        if(PL1_Hit()){
            // Keep toggling until pedestrian green
            while(!PL1_Green_IsOn()){ // You need a function to check if green is on
                ToggleLED(leds, &PL1_Indicator); // Use your indicator LED here
                vTaskDelay(pdMS_TO_TICKS(toggleFreq));
            }
        }
        else if(PL2_Hit()){
            while(!PL2_Green_IsOn()){
                ToggleLED(leds, &PL2_Indicator);
                vTaskDelay(pdMS_TO_TICKS(toggleFreq));
            }
        }
        else {
            // Normal LED state when nothing is pressed
        	uint8_t leds[3] = {0b00100100, 0b01001100, 0b01001100};
            ShiftReg_SendBytes(leds, 3);
            vTaskDelay(pdMS_TO_TICKS(100)); // small delay to prevent CPU hogging
        }
    }
}*/


