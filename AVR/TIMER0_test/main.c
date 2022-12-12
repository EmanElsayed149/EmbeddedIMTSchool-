/*
 * main.c
 *
 *  Created on: Nov 4, 2021
 *      Author: Dell
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "util/delay.h"
#include "GIE_int.h"
#include "TIMER_int.h"
#include "TIMER_reg.h"

/***************this code for toglle led and buzer */
void ISR(void)
{
	static volatile u32 Local_counter=0;
	static u8 state=1;
	static u8 state2=1;
	Local_counter++;
	static u8 count2=0;
	if(Local_counter==1000)
	{
		count2++;
		M_DIO_Vid_wrtPinVal(M_DIO_PORTB,M_DIO_PIN0,state);
		Local_counter=0;
		state = (! state);
		TCNT0=24;
		if(count2==2)
		{
			count2=0;
			M_DIO_Vid_wrtPinVal(M_DIO_PORTB,M_DIO_PIN1,state2);
			state2 = (! state2);
		}
	}
}
int main(void)
{
	//********************this code for toglle led and buzer
	M_GIE_Vid_EnableGlbInt();
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN0,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN1,M_DIO_OUTPUT);
	M_TIMER_Init(OVERFLOW_Mode,Prescalar_8,24);
	CALL_BACK(ISR);



	/***************pwm in timer0***************/
	/*
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN3,M_DIO_OUTPUT);
	M_TIMER_Init(OVERFLOW_Mode,Prescalar_8,192);*/
	while(1)
	{

	}
}
/*
 * in case of you generate overflow mode
 * you should init interrupt to do logic you want
 * but in case of pwm you should set OCRO to set duty
 * then voltage out is depend on duty
*/


