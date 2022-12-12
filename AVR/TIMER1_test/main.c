/*
 * main.c
 *
 *  Created on: Nov 5, 2021
 *      Author: Dell
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "util/delay.h"
#include "string.h"
#include "DIO_int.h"
#include "TIMER1_int.h"
#include "TIMER_int.h"
#include "GIE_int.h"
#include "LCD_int.h"
u8 counter=0;
u16 period_counts=0;
u16 Ton=0;
u16 period_on=0;
u8 arr1[10];
u8 arr2[10];
void ISR(void);
int main(void)
{
	u32 fre=0;
	u8 duty=0;
	H_LCD_Vid_Int();

	/**********************ICU PREPHIRAL********************/
	M_TIMER1_Vid_ICUInit();
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN3,M_DIO_OUTPUT);
	M_TIMER_Init(FAST_pWM_Mode,Prescalar_64,192);


	/********FOR ICU INTERRUPT******/
	M_GIE_Vid_EnableGlbInt();
	ICU_CALL_BACK(&ISR);
	//M_TIMER1_Vid_Init();

	while(1)
	{
		H_LCD_Vid_Clear();
		/**************led or buzzer with pwm**************/

		/*for(u16 i=0;i<=1000;i+10)
		{
			M_TIMER1_Vid_SetDuty(i);
			_delay_ms(20);
		}*/



		/*******************servo motors ****************/
		/*M_TIMER1_Vid_SetDuty(80);
		_delay_ms(500);
		M_TIMER1_Vid_SetDuty(145);
		_delay_ms(500);
		M_TIMER1_Vid_SetDuty(210);
		_delay_ms(500);
		M_TIMER1_Vid_SetDuty(260);
		_delay_ms(500);
		M_TIMER1_Vid_SetDuty(320);
		_delay_ms(500);
		M_TIMER1_Vid_SetDuty(260);
		_delay_ms(500);
		M_TIMER1_Vid_SetDuty(210);
		_delay_ms(500);
		M_TIMER1_Vid_SetDuty(145);
		_delay_ms(500);*/

		/*****************************ICU******************/
		if(counter ==4){
			fre=8000000/(period_on-Ton);
			duty=((double)(period_on-period_counts)/(period_on-Ton))*100.0;
		}
		sprintf(arr1,"%d",fre);
		sprintf(arr2,"%d",duty);
		H_LCD_Vid_GotoRowCol(H_LCD_ROW0,H_LCD_COL00);
		H_LCD_Vid_Wrt_Str("FRE:");
		H_LCD_Vid_Wrt_Str(arr1);
		H_LCD_Vid_GotoRowCol(H_LCD_ROW1,H_LCD_COL00);
		H_LCD_Vid_Wrt_Str("DUTY:");
		H_LCD_Vid_Wrt_Str(arr2);
		_delay_ms(1000);

	}
}
void ISR(void)
{
	counter++;
	if(counter ==1)
	{
		M_TIMER1_Vid_ICUResetTimer();
		M_TIMER1_Vid_ICUSetEdge(FALLING_EDGE);
	}
	else if(counter==2)
	{
		Ton=M_TIMER1_U16_ICUGetValue();
		M_TIMER1_Vid_ICUSetEdge(RISING_EDGE);
	}
	else if(counter ==3){
		period_counts=M_TIMER1_U16_ICUGetValue();
		M_TIMER1_Vid_ICUSetEdge(RISING_EDGE);
	}
	else if(counter==4)
	{
		period_on=M_TIMER1_U16_ICUGetValue();
		M_TIMER1_Vid_DeInit();
	}
}
