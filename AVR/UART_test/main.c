/*
 * main.c
 *
 *  Created on: Nov 20, 2021
 *      Author: Dell
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "util/delay.h"
#include "DIO_int.h"
#include "UART_int.h"

int main(void)
{
	M_UART_Vid_Init();
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN0,M_DIO_OUTPUT);
	//u8 data[15];
	/*M_UART_Vid_RecieveString(data);
	M_UART_Vid_SendString(data);*/
	u8 data;
	while(1)
	{
		data=M_UART_U8_RecieveData();
		M_UART_Vid_SendData(data);
		if(data=='H'){
			M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_HIGH);
		}else
		{
			M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_LOW);
		}
		//M_UART_Vid_SendData(data+1);
	}
}
