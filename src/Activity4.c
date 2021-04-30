/**
 * @file Activity4.c
 * @author 260162
 * @brief UART serial communication function definition
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "Activity4.h"
/**
 * @brief Initialization of Port
 * 
 * @param value_ubrr 
 */
void UART_Init(uint16_t value_ubrr){

    UBRR0L = value_ubrr;
    UBRR0H = (value_ubrr>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

/**
 * @brief Data written on UART ports
 * 
 * @param spec 
 */
void UARTwrite(char spec)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0 = spec;
}
