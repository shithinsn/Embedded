/*
 * Timer0_overfow_interrupt.c
 *
 * Created: 29-09-2025 20:48:23
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
uint16_t count=0;

ISR(TIMER0_OVF_vect)  // INTERRUPT SERVICE ROUTINE (TIMER0_OVF_vect= INTERRUPT VECTOR TABLE "ADDRESS" FOR TIMER OVER FLOW
{
	if(count>=977)
	{
		PORTB^=(1<<PORTB5);
		count=0;
	}
	 count++;
}
int main(void)
{
	DDRB|=(1<<DDB5);
	
	TCCR0A=0; //NORMAL MODE
	TCCR0B|=(1<<CS00)|(1<<CS01); //PRESCALAR 64
	TIMSK0|=(1<<TOIE0); //enabling timer overflow interrupt for timer 0 in normal mode
	sei();
  
    while (1) 
    {
    }
}

