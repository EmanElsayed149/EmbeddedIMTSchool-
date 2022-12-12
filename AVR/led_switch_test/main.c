/*
 * main.c
 *
 *  Created on: Oct 7, 2021
 *      Author: Dell
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "LED_int.h"
#include <util/delay.h>


int main(void)
{
	u8 Switch_state=0;
	H_Led_Vid_Int(M_DIO_PORTA,M_DIO_PIN0);
	H_Switch_Vid_Int(M_DIO_PORTA,M_DIO_PIN1);
	while(1)
	{
		Switch_state= H_Switch_u8_read(M_DIO_PORTA,M_DIO_PIN1);
		if(Switch_state==0)
		{
			H_Led_Vid_State(M_DIO_PORTA,M_DIO_PIN0,LED_ON);
		}
		else
		{
			H_Led_Vid_State(M_DIO_PORTA,M_DIO_PIN0,LED_OFF);
		}

	}
}
