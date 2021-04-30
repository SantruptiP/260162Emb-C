/**
 * @file Activity3.c
 * @author 260162
 * @brief Calculating PWM for the specific temperature 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"Activity3.h"
#include<util/delay.h>
#include<avr/io.h>
/**
 * @brief Counter and timer variable Initialized
 * 
 */
void PWM_Init(void)
{
    /*Registers and ports are Configured*/
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);

}
/**
 * @brief analog input gives the respective output
 * 
 * @param val_ADC 
 */
char OutPWM (uint16_t val_ADC)
{
    
    char temperature;

    if((val_ADC>=0) && (val_ADC<=200)){

        OCR1A = 205; //20% duty cycle 20%
        temperature = 20;
        _delay_ms(20);
    }
    else if((val_ADC>=201 && (val_ADC<=500)){

        OCR1A = 410; //40% duty cycle
        temperature = 25;
       _delay_ms(20);
    }
    else if((val_ADC>=501) && (val_ADC<=700)){

        OCR1A = 717;//70% duty cycle
        temperature = 29;
        _delay_ms(20);
    }
    else if((val_ADC>=701) && (val_ADC<=1024)){

        OCR1A = 973; //95% duty cycle
        temperature = 33;
        _delay_ms(20);
    }
    else{
        OCR1A = 0; //0% output
        temperature = 0;
    }
    return temperature;
}
