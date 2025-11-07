/*
 * UART_hello_world.c
 *
 * Created: 20-10-2025 01:47:54
 * Author : HP
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	UBRR0H = 0;
	UBRR0L = 103;         //SET BAUD RATE
	UCSR0B|=(1<<TXEN0);  // ENABLES TRANSMISSION
	UCSR0C|=(1<<UCSZ01) | (1 << UCSZ00);  //SET 8 BIT DATA PER FRAME

	char a[] = "Hello world\n"; 
	int j;

	while (1)
	{
		for(j = 0; a[j] != '\0'; j++)
		{
			while(!(UCSR0A & (1 << UDRE0))); // wait until UDR0 is ready
			UDR0 = a[j];
		}
		_delay_ms(1000);
	}
}

