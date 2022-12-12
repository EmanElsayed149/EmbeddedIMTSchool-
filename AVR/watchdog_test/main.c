/*
 * main.c
 *
 *  Created on: Nov 6, 2021
 *      Author: Dell
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "util/delay.h"
#include "DIO_int.h"
#include "WATCHDOG_int.h"

int main(void)
{
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN0,M_DIO_OUTPUT);
	M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_HIGH);
	_delay_ms(1000);
	M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_LOW);
	M_WATCHDOG_Vid_Init();
	M_WATCHDOG_Vid_Sleep();
	while(1)
	{

	}
}
