

#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>


int main(void){
    DDRB|=(1<<DDB5);
	DDRB|=(1<<DDB4);
	DDRD &=~(1<<DDD2);
	/* Replace with your application code */
	while (1)
	{
		if (PIND & (1<<PIND2))
		{
		PORTB|=(1<<PORTB5);
		PORTB&=~(1<<PORTB4);
		_delay_ms(3000);
		
		PORTB&=~(1<<PORTB5);
		PORTB&=~(1<<PORTB4);
		_delay_ms(1000);
		
		PORTB&=~(1<<PORTB5);
		PORTB|=(1<<PORTB4);
		_delay_ms(3000);
		}
		else
		{
			PORTB&=~(1<<PORTB5);
			PORTB&=~(1<<PORTB4);
			_delay_ms(1000);
	    }
	}
}



