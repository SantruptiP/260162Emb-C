/**
 * @file Activity.h
 * @author 260162
 * @brief UART communication
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__
#include<avr/io.h>
/**
 * @brief UART communication ports Initialized
 * 
 * @param u_brr 
 */
void InitUART(uint16_t u_brr);
/**
 * @brief From UART port read characters
 * @return  a char value
 */
char UARTread();
/**
 * @brief Characters are written to UART port
 * 
 * @param spec 
 */
void UARTwrite(char spec);

#endif
