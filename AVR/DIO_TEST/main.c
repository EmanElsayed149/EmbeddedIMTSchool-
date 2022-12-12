/*
 * main.c
 *
 *  Created on: Oct 1, 2021
 *      Author: Dell
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include <util/delay.h>

int main(void)
{
	u8 switch_state =0;
	//M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN0,M_DIO_OUTPUT);
	//M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN1,M_DIO_INPUT);
	//M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN1,M_DIO_HIGH);
	M_DIO_Vid_WrtPortDir(M_DIO_PORTA,0x01);
	M_DIO_Vid_WrtPortVal(M_DIO_PORTA,0x02);
	
	while(1)
	{
		switch_state=M_DIO_u8_READPinVal(M_DIO_PORTA,M_DIO_PIN1);
		if(switch_state==0)
		{
			M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_HIGH);
		}else
		{
			M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_LOW);
		}
	}
}
