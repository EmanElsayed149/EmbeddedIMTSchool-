/*
 * main.c
 *
 *  Created on: Dec 11, 2021
 *      Author: Dell
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "FreeRTOS.h"
#include "task.h"

void LED1(void *ptr);
void LED2(void *ptr);
void LED3(void *ptr);
int main(void)
{
	xTaskCreate(LED1,0,100,0,0,0);
	xTaskCreate(LED2,0,100,0,1,0);
	xTaskCreate(LED3,0,100,0,2,0);
	vTaskStartScheduler();
	while(1)
	{

	}
}
void LED1(void *ptr)
{
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN0,M_DIO_OUTPUT);
	static u8 state=0;
	while(1)
	{
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,state);
		state =!state;
		vTaskDelay(1000);
	}

}
void LED2(void *ptr)
{
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN1,M_DIO_OUTPUT);
	static u8 state=0;
	while(1)
	{
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN1,state);
		state =!state;
		vTaskDelay(2000);
	}
}
void LED3(void *ptr)
{
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN2,M_DIO_OUTPUT);
	static u8 state=0;
	while(1)
	{
		M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN2,state);
		state =!state;
		vTaskDelay(3000);
	}

}
