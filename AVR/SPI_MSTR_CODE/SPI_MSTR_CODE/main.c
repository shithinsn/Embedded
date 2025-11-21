/*
 * SPI_MSTR_CODE.c
 *
 * Created: 21-11-2025 01:22:10
 * Author : HP
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

void SPI_MasterInit(void)
{
	// MOSI (PB3), SCK (PB5), SS (PB2) as output
	DDRB |= (1<<PB3) | (1<<PB5) | (1<<PB2);
	// MISO (PB4) automatically becomes input

	// Enable SPI, Set as Master, clock = fosc/16
	SPCR = (1<<SPE) | (1<<MSTR) | (1<<SPR0);
}

void SPI_MasterTransmit(uint8_t data)
{
	SPDR = data;                   // Load data
	while(!(SPSR & (1<<SPIF)));    // Wait for transfer complete
}

int main(void)
{
	SPI_MasterInit();  //Initialize SPI Master

	while(1)
	{
		SPI_MasterTransmit(0x55); //Send 0x55 via SPI
		_delay_ms(500);  //500 ms delay
	}
}

