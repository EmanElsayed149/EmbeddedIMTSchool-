/*
 * main.c
 *
 *  Created on: Dec 10, 2021
 *      Author: Dell
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_int.h"
#include "GIE_int.h"
#include "SCH_int.h"


void LED1(void);
void LED2(void);
void LED3(void);

int main(void)
{
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN0,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN1,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN2,M_DIO_OUTPUT);

	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,M_DIO_PIN0,M_DIO_OUTPUT);

	M_GIE_Vid_EnableGlbInt();
	SCH_Vid_creatTask(0,1000,LED1);
	SCH_Vid_creatTask(1,2000,LED2);
	SCH_Vid_creatTask(2,3000,LED3);
	SCH_Vid_Start();
	while(1)
	{

	}

}
void LED1(void)
{
	static u8 state=0;
	M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,state);
	state =!state;
}
void LED2(void)
{
	static u8 state=0;
	M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN1,state);
	state =!state;
}
void LED3(void)
{
	static u8 state=0;
	M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN2,state);
	state =!state;
}
