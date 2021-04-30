/**
 * @file Activity2.h
 * @author 260162 
 * @brief ADC function definition
 * @version 0.1
 * @date 2021-04-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__
/**
 * @brief Analog input is read and digital 8 bit value is returned
 * 
 * @param channel 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t channel);
void ADC_Init();
#endif
