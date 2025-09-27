/*
 * shithin.c
 *
 * Created: 28-09-2025 00:40:31
 *  Author: HP
 */ 
#include<avr/io.h>

void timer0_init(void) //define timer0_init()
{
	TCCR0A|=(1<<WGM01); // CTC MODE
	OCR0A=249; //FOR COUNT 250 COUNT
	TCNT0=0; //MAKING TIMER COUNTER 0
	TCCR0B|=(1<<CS00);
	TCCR0B|=(1<<CS01); //PRESCALAR 64
	TIFR0|=(1<<OCF0A);	//SETTING FLAG TO 0 BY WRITING ONE 
	
}

void shithin(uint16_t ms) //DEFINE SHITHIN
{
	timer0_init();
	while(ms--)  //create delay for "ms" millisecond	
	{
		while(!(TIFR0&(1<<OCF0A))) //1ms loop
		{
			
		}
		TIFR0|=(1<<OCF0A);
	}
}