/*
 * main.c
 *
 *  Created on: Sep 19, 2021
 *      Author: Eman Elsayed
 */

#include"avr/io.h"
#include"util/delay.h"

int main(void)
{

	 char num ;
	/*arry contains all number for seven segment */
	char numbers[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};

	/*define first three pins in portA as output for leds*/
	DDRA=0x07;
	/* define portB-portD as output for 2-seven segment */
	DDRB=0xff;
	DDRD=0xff;
	while(1)
	{
		for (char i=10;i>=1;i--)
		{
			PORTA=0b00000001;        /*turn on Green led*/
			num=i/10;
			PORTD=numbers[num];
			num=i%10;
			PORTB=numbers[num];
			_delay_ms(1000);
		}
		for(char i=3;i>=1;i--)
		{
			PORTA=0b00000010;        /*turn on Yellow led*/
			num=i/10;
			PORTD=numbers[num];
			num=i%10;
			PORTB=numbers[num];
			_delay_ms(1000);
		}
		for (char i=10;i>=1;i--)
		{
			PORTA=0b00000100;        /*turn on Red led*/
			num=i/10;
			PORTD=numbers[num];
			num=i%10;
			PORTB=numbers[num];
			_delay_ms(1000);
		}

	}
}
