/*
 * Fast_pwm_Timer0.c
 *
 * Created: 24-09-2025 20:58:47
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD|=(1<<PD6);
		
    /* Replace with your application code */
    while (1) 
    {
	 TCCR0A|=(1<<WGM01);
	 TCCR0A|=(1<<WGM00);
	 TCCR0A|=(1<<COM0A1);
	 TCCR0B|=(1<<CS00);
	 TCCR0B|=(1<<CS01);
	 OCR0A=78.12;
	 	
    }
}

