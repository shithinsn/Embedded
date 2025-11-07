/*
 * UART_Transmit.c
 *
 * Created: 17-10-2025 20:53:39
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int UART_init(void)
{
	UBRR0H=0;
	UBRR0L=103;  // SET BAUD RATE 
	
	UCSR0B |= (1<<TXEN0);  // ENABLES TRANSMISSION 
	
	UCSR0C |=(1<<UCSZ01)|(1<<UCSZ00); // SET 8 BITS PER FRAME
	UDR0=A;
}
int main(void)
{   
	UART_init();
	
	while(!(UCSR0A & (1<<UDRE0)));
		
	UDR0=A;
	_delay_ms(1000);
	
    }
	
}

