/*
 * modular_delay.c
 *
 * Created: 26-09-2025 20:37:43
 * Author : HP
 */ 
#define F_CPU 16000000UL
#include<avr/io.h>
#include "shithin.h"
#include<stdint.h>


int main(void)
{
	DDRB|=(1<<DDB5);
    while (1) 
    {
		PORTB^=(1<<PORTB5);
		shithin(2000);  //2000ms delay
    }
}

