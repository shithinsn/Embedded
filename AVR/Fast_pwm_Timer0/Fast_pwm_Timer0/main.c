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
	 DDRD|=(1<<PORTD6);                     //SET PD6 AS OUTPUT
	 while (1)
	 {
	 TCCR0A|=(1<<WGM01)|(1<<WGM00);        //SELECT FAST PWM
	 TCCR0A|=(1<<COM0A1);                 //ENABLE NON-INVERTING MODE
	 TCCR0B|=(1<<CS00)|(1<<CS01);         //SET PRESCALAR 64
	 OCR0A=100;                         //SELECT DUTYCYCLE
   }
}

