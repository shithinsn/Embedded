/*
 * DC motor stp cw ccw.c
 *
 * Created: 15-09-2025 19:03:44
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void CW(){
	PORTB|=(1<<PORTB5);
	PORTB5&=~(1<<PORTB4);
	_delay_ms(3000);
}

void STP(){
	PORTB &=~(1<<PORTB5);
	PORTB &=~(1<<PORTB4);
	_delay_ms(1000);
}
void CCW(){
	PORTB &=~(1<<PORTB5);
	PORTB |=(1<<PORTB4);
	_delay_ms(3000);
}

int main(void)
{
	DDRB |=(1<<5);
	DDRB |=(1<<4);
	while (1)
	{
		CW();
		STP();
		CCW();
		STP();
   }
}

