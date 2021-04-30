/**
 * @file Activity3.h
 * @author 260162
 * @brief Display the output of the temperature sensor
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__
#include<avr/io.h>
/**
 * @brief Function definition
 * 
 * @param temporary variable 
 * @return a char value
 */
char OutPWM(uint16_t t_val);
void PWM_Init(void);
#endif
