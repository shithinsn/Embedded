/*
 * Timer0_CTC.c
 *
 * Created: 19-09-2025 20:38:24
 * Author : HP
 */ 


#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
     DDRB |=(1<<DDB5);
	 TCCR0A |=(1<<WGM01); //CTC MODE
	 OCR0A=200; //SET POINT = 200
	 TCNT0=0; //INITIAL VALUE OF TIMER IS 0
	 TCCR0B |=(1<<CS00); //NO PRESCALING
	 TIFR0|=(1<<OCF0A); //WRITING 1 TO OCFOA BIT OF TIFRO REGISTER IT 
	
	while (1) 
    {
		
	  PORTB^=(1<<PORTB5);
	  for(long int i=0;1<160000;i++)
	  {
		
        while(!(TIFR0&(1<<OCF0A)))
	    {
				
	    }
	    TIFR0|=(1<<OCF0A);
	
	  }
	  
	 
	}
  
  }

