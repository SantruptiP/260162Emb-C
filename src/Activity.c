/**
 * @file Activity1.c
 * @author 260162 (you@domain.com)
 * @brief Chanfes the state of LED
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
// include files
#include<avr/io.h>
#include "Activity1.h"
/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void LedStatus(uint8_t stat)
{
	LED_PORT = (stat << LED_PIN);
}
void InitLED(void)
{
	  DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    PORTD|=(1<<PD1);
}
