/*
 * main.c
 *
 *  Created on: Sep 17, 2021
 *      Author: Eman Elsayed
 */
#include"avr/io.h"
#include "util/delay.h"
int main(void)
{


	DDRD=0b00001111;
	PORTD=0b00001000;

	while(1)
	{
		for(int i=0;i<=3;i++)
		{
			_delay_ms(1000);
			PORTD=PORTD>>1;
			_delay_ms(1000);

		}
		PORTD=0b00001000;
		/*
		PORTD=0b00001111;
		_delay_ms(500);
		PORTD=0x00;
		_delay_ms(500);*/
	}
	return 0;
}

