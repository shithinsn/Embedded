#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD = 0b00001000; 
	DDRC = 0b00000000; 

	while (1)
	{
		if(PINC == 0b00000000) 
		{
			PORTD = 0b00001000; 
		}
		else
		{
			PORTD = 0b00000000; 
		}
	}
}


