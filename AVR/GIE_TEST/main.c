/*
 * main.c
 *
 *  Created on: Oct 15, 2021
 *      Author: Dell
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "util/delay.h"
#include "DIO_int.h"
#include "GIE_int.h"
#include "EXI_int.h"

void ISR0(void);
int main(void)
{
	M_GIE_Vid_EnableGlbInt();
	M_EXI_Vid_initINT0(Falling_Edge);
	Call_back(&ISR0);
	while(1)
	{
	}
}
void ISR0(void)
{
	/* Function which should be executed when enterrupt occur*/
	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,1,M_DIO_OUTPUT);
	M_DIO_Vid_wrtPinVal(M_DIO_PORTD,1,M_DIO_HIGH);
	_delay_ms(1000);
	M_DIO_Vid_wrtPinVal(M_DIO_PORTD,1,M_DIO_LOW);
}
