/*
 * main.c
 *
 *  Created on: Dec 22, 2021
 *      Author: Dell
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_int.h"
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

//semaphor that synch between led and button

xSemaphoreHandle  semaphor_led;

/**task1 decleratio**/
void Button(void *ptr);
void Led(void *ptr);

int main(void)
{
	/*creat btn task**/
	xTaskCreate(Button,0,100,0,1,0);
	/*creat led task**/
	xTaskCreate(Led,0,100,0,0,0);

	/*create semaphoe******/
	vSemaphoreCreateBinary(semaphor_led);
	//start schaduling
	vTaskStartScheduler();

	while(1)
	{

	}
}
void Button(void *ptr)
{
	u8 button_state=0;
	/*pull up internal*/
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN0,M_DIO_INPUT);
	M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN0,M_DIO_HIGH);

	while(1)
	{
		/*periodicity*/
		vTaskDelay(20);
		xSemaphoreTake(semaphor_led,0);
		button_state=M_DIO_u8_READPinVal(M_DIO_PORTA,M_DIO_PIN0);
		if(button_state==0)
		{
			xSemaphoreGive(semaphor_led);
		}
	}
}
void Led(void *ptr)
{
	u8 semaled_state;
	M_DIO_Vid_WrtPinDir(M_DIO_PORTA,M_DIO_PIN0,M_DIO_OUTPUT);
	/*periodicity*/
	vTaskDelay(50);
	while(1)
	{
		semaled_state=xSemaphoreTake(semaphor_led,0);
		if(semaled_state==pdPASS)
		{
			M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN1,M_DIO_HIGH);
			xSemaphoreGive(semaphor_led);
		}else
		{
			M_DIO_Vid_wrtPinVal(M_DIO_PORTA,M_DIO_PIN1,M_DIO_LOW);
		}
	}
}

