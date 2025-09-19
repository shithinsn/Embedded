/*
 * Timer_prescalar_1024.c
 *
 * Created: 19-09-2025 19:53:35
 * Author : HP
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>


void delay_1s(void)
{
	unsigned int i;
	unsigned int count=61035;
	for(i=0; i<count; i++)
	{
		TCNT0=0;
		TCCR0A=0;
		TCCR0B|=(1<<CS00);
		TIFR0|=(1<<TOV0); //making timer over flow flag
		while (!(TIFR0 & (1<<TOV0)));//waiting timer overflow flag to set we get 16us delay
	}
}

int main(void)
{
	
	DDRB |=(1<<DDB5); //PB5 as output
	
	while (1)
	{
		PORTB |=(1<<PORTB5);
		delay_1s();
		PORTB&=(1<<PORTB5);
		delay_1s();
		
	}
}

