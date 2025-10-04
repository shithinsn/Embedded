/*
 * enable_interrupt0.c
 *
 * Created: 05-10-2025 01:03:03
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

ISR(INT0_vect)   //INTERRUPT SERVICE ROUTINE FOR INT0
{
	PORTB^=(1<<PORTB5); // TOGGLE PORTB5
	_delay_ms(2000); //10MS DELAY
}

int main(void)
{
	DDRD &=(1<<DDD2); //MAKING PORTD2 AS INPUT
	DDRB |=(1<<DDB5); //MAKING PORTB5 AS OUTPUT
	PORTD=(1<<PORTD2); //ENABLE INTERNAL PULL UP TO MAKE PORTD2 NORMALLY HIGH
	
	
	EIMSK |=(1<<INT0); //ENABLE INT0 AT EIMSK REGISTER

	EICRA |=(1<<ISC01); //ENABLE FALLING EDGE IN EICRA REGISTER 
	EICRA&=~(1<<ISC01); //ENABLE FALLING EDGE IN EICRA REGISTER
	sei();  //ENABLING GLOBAL INTERRUPT AT SREG
    while (1) 
    {
    }
}

