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
 * @brief Value of status changes the state of LED 
 * 
 * @param Status pin which sets LED pin.
 */
void InitLED(void)
{
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    PORTD|=(1<<PD1);
}
void LedStatus(uint8_t status)
{
	PORT = (status << PIN);
}

