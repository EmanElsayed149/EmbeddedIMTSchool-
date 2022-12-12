/*
 * main.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Dell
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define F_CPU 8000000UL
#include "util/delay.h"
#include "DIO_int.h"
int main(void)
{
	/********************************************************************servo motor**************************************/
	/*M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN0,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN1,M_DIO_OUTPUT);
	while(1)
	{
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_HIGH);
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN1,M_DIO_LOW);
		_delay_ms(5000);
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_LOW);
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN1,M_DIO_LOW);
		_delay_ms(2000);
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_LOW);
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN1,M_DIO_HIGH);
		_delay_ms(5000);*/




	/*
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN0,M_DIO_OUTPUT);
	while(1)
	{
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_HIGH);
		_delay_ms(1000);
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_LOW);
		_delay_ms(1000);

	}*/



	/***************************************************************STEPPER MOTOR*********************************************************/
	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,M_DIO_PIN0,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,M_DIO_PIN1,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,M_DIO_PIN2,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,M_DIO_PIN3,M_DIO_OUTPUT);
	while(1)
	{
		for(u16 i=0;i<=386;i+=4)
		{
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN0,M_DIO_LOW);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN1,M_DIO_LOW);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN2,M_DIO_LOW);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN3,M_DIO_HIGH);
			_delay_ms(2);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN0,M_DIO_LOW);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN1,M_DIO_LOW);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN2,M_DIO_HIGH);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN3,M_DIO_LOW);
			_delay_ms(2);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN0,M_DIO_LOW);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN1,M_DIO_HIGH);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN2,M_DIO_LOW);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN3,M_DIO_LOW);
			_delay_ms(2);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN0,M_DIO_HIGH);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN1,M_DIO_LOW);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN2,M_DIO_LOW);
			M_DIO_Vid_wrtPinVal(M_DIO_PORTD,M_DIO_PIN3,M_DIO_LOW);
			_delay_ms(2);

		}
	}
}
