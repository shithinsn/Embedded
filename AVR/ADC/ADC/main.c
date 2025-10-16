/*
 * ADC.c
 *
 * Created: 17-10-2025 02:37:16
 * Author : HP
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"


void ADC_init(void)  //ADC Initialisation
{
	ADMUX |=(1<<REFS0);  //Referenece =AVCC (5V), input =ADC0
	ADCSRA |=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0); //Enable ADC ,Prescalar = 128
}

uint16_t ADC_Read(uint8_t channel)  //ADC reading
{
	channel &=0x07;    //Limit to 0-7
	ADMUX = (ADMUX & 0xF8)|channel; //Select channel
	ADCSRA |=(1<<ADSC);    //Start conversion
	while (ADCSRA & (1<<ADSC)); //Wait for conversion combine
	return (ADCL|ADCH<<8); //combine result
}

int main(void)
{
	uint16_t adc_value;
	lcd_init();
	ADC_init();       //Call ADC initialisation function
	while (1)
	{
		lcd_clear();
		lcd_set_cursor(0,0);
		lcd_print("ADC VALUE :");
		adc_value = ADC_Read(0);       //Read from analog channel 0
		lcd_set_cursor(1,0);
		lcd_print_uint16(adc_value);
		_delay_ms(500);
	}
}

