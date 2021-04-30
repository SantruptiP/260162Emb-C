/**
 * @file project_main.c
 * @author 260162
 * @brief Activity_1
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"
#include<avr/io.h>


/**
 * @brief Initialize all the peripherals
 * 
 */

void peripheral_init(void)
{
    /*LED and Switch pins are Configured*/
    LED_Init();
    /*ADC registers are configured*/
    ADC_Init();
    /*PWM registers are configured*/
    PWM_Init();
    /*UART communication pin are configured*/
    UART_Init(103);
}
    
   
uint16_t t;
char td;
int main(void)
{
    /*uint16_t temp;*/
    // Initialize peripherals
    peripheral_init();
    
    while(1)
    {
        if(SENSOR_ON) //switch 1 = ON
        {
            if(HEAT_ON) //switch 2 = ON
            {
                LedStatus(LED_ON);//LED = 0N
                t=ReadADC(0);
                td = OutPWM(temp);
                UARTwrite(td);

            }
            else
            {
                
                LedStatus(LED_OFF);
            }
        }
        else
        {
            LedStatus(LED_OFF);//LED = OFF
            OCR1A=0;
        }
    }
    return 0;
}

