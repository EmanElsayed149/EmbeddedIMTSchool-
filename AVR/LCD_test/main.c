/*
 * main.c
 *
 *  Created on: Oct 8, 2021
 *      Author: Dell
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include <util/delay.h>
#include "LCD_int.h"

int main(void)
{
	H_LCD_Vid_Int();
	u32 Time=6*60;
	u32 time_hour=6,time_minute=0;
	double angle=0,dis;
	H_LCD_Vid_Pnt_Number( Time%60);
	_delay_ms(6*1000);
	while(1)
	{

		H_LCD_Vid_Clear();
		Time+=15;
		time_hour=Time/60;
		time_minute=Time%60;
		angle+=3.75;
		dis=(1600/360)*angle;
		H_LCD_Vid_GotoRowCol(0,0);
		H_LCD_Vid_Wrt_Str("time ");
		H_LCD_Vid_Pnt_Number( time_hour);
		H_LCD_Vid_Wrt_CHr(':');
		H_LCD_Vid_Pnt_Number( time_minute);
		H_LCD_Vid_GotoRowCol(1,0);
		H_LCD_Vid_Wrt_Str("tilt angle:");
		H_LCD_Vid_Pnt_Number( (int)angle);
		H_LCD_Vid_Wrt_CHr('.');
        double fl=(double)angle-(int)angle;
        H_LCD_Vid_Pnt_Number( fl*100);
		_delay_ms(60*1000*15);

	}
}

