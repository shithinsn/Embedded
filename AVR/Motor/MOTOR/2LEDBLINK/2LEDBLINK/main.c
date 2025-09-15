/*
 * 2LEDBLINK.c
 *
 * Created: 15-09-2025 20:08:34
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>



int main(void)
{	DDRB|=(1<<DDB5);
	DDRB|=(1<<DDB4);
	/* Replace with your application code */
	while (1)
	{
		PORTB|=(1<<PORTB5);
		PORTB&=~(1<<PORTB4);
		_delay_ms(3000);
		
		PORTB&=~(1<<PORTB5);
		PORTB&=~(1<<PORTB4);
		_delay_ms(3000);
		
		PORTB&=~(1<<PORTB5);
		PORTB|=(1<<PORTB4);
		_delay_ms(2000);
		
		
	}
}


