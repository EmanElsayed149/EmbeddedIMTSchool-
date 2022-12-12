/*
 * main.c
 *
 *  Created on: Sep 18, 2021
 *      Author: Dell
 */

#include"avr/io.h"
#include"util/delay.h"
int main(void)
{
	//***************************************************numbers from 0:99

	DDRD=0xff;
	DDRB=0xff;
	char num;
	char num2;
	char numbers[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
	while(1)
	{
		for(int i=0;i<=99;i++)
		{
			num=i%10;
			PORTB=numbers[num];
			_delay_ms(500);
			num2=i/10;
			PORTD=numbers[num2];
			_delay_ms(500);
		}

	}


	//************************************************************number binary on led and 7segment

	/*DDRA=0xff;
	DDRB=0xff;
	PORTB=8;
	_delay_ms(3 000);
	char numbers[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
	while(1)
	{
		for(int i=0;i<=9;i++)
		{
			PORTA=numbers[i];
			PORTB=i;
			_delay_ms(1000);
		}

	}*/

	//*******************************************************************LED ON BY SWITCH PULL UP
	/*DDRA=1;
	PORTA=2;
	while(1)
	{
		while(PINA==0)
		{
			PORTA=3;
		}
		PORTA=2;
	}
	return 0;*/
}
