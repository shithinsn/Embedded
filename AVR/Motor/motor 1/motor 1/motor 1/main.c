/*
 * motor 1.c
 *
 * Created: 12-09-2025 19:44:37
 * Author : HP
 */ 

#include <avr/io.h>
#include <util/delay.h>

void CW()
{
	PORTB |= (1 << PORTB5); 
	PORTB &= ~(1 << PORTB4);
	_delay_ms(a)
}


void CCW(void)
{
	PORTB &= ~(1 << PORTB5); 
	PORTB |= (1 << PORTB4);  
}


void STP(void)
{
	PORTB &= ~(1 << PORTB5); 
	PORTB &= ~(1 << PORTB4); 
}

int main(void)
{
	
	DDRB |= (1 << DDB5) | (1 << DDB4);

	while (1)
	{
		CW();               
		_delay_ms(3000);    

		STP();              
		_delay_ms(1000);    

		CCW();              
		_delay_ms(3000);    

		STP();              
		_delay_ms(1000);    
	}
}
