/*
 * main.c
 *
 *  Created on: Oct 9, 2021
 *      Author: Dell
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include <util/delay.h>
#include "string.h"
#include "LCD_int.h"
#include "KEYPAD_int.h"

u8 global_u8_op1[2];
u8 global_u8_op2[2];
u8 global_u8_operation1;
u8 global_u8_operation2;
u8 global_u8_result=0;
u8 arr[10];
u8 calc(u8 num);
int main (void)
{
	//u8 local_press;
	H_LCD_Vid_Int();
	H_KPD_Init();
	while(1)
	{
		/*
		while(local_press==255)
		{
			local_press=H_KPD_GetPressedKey();
		}
		H_LCD_Vid_Clear();
		H_LCD_Vid_Wrt_Str("HELLO");
		H_LCD_Vid_Wrt_CHr(local_press);
		local_press=255;
		*/


		/********************calculator*****************************/
		global_u8_op1[0]=H_KPD_GetPressedKey();
		while(global_u8_op1[0]==255)
		{
			global_u8_op1[0]=H_KPD_GetPressedKey();
		}

		/***************print num on lcd and convrt it to intger***********/
		H_LCD_Vid_Clear();
		H_LCD_Vid_Wrt_CHr( global_u8_op1[0]);
		global_u8_op1[0]=calc(global_u8_op1[0]);
		global_u8_op1[1]=H_KPD_GetPressedKey();
		while(global_u8_op1[1]==255)
		{
			global_u8_op1[1]=H_KPD_GetPressedKey();
		}

		/***************print num on lcd and convrt it to intger***********/
		H_LCD_Vid_Wrt_CHr( global_u8_op1[1]);
		global_u8_op1[1]=calc(global_u8_op1[1]);

		global_u8_operation1=H_KPD_GetPressedKey();
		while(global_u8_operation1==255)
		{
			global_u8_operation1=H_KPD_GetPressedKey();
		}

		/***************print on lcd ***********/
		H_LCD_Vid_Wrt_CHr( global_u8_operation1);


		global_u8_op2[0]=H_KPD_GetPressedKey();
		while(global_u8_op2[0]==255)
		{
			global_u8_op2[0]=H_KPD_GetPressedKey();
		}

		/***************print num on lcd and convrt it to intger***********/
		H_LCD_Vid_Wrt_CHr( global_u8_op2[0]);
		global_u8_op2[0]=calc(global_u8_op2[0]);

		global_u8_op2[1]=H_KPD_GetPressedKey();
		while(global_u8_op2[1]==255)
		{
			global_u8_op2[1]=H_KPD_GetPressedKey();
		}
		/***************print num on lcd and convrt it to intger***********/
		H_LCD_Vid_Wrt_CHr( global_u8_op2[1]);
		global_u8_op2[1]=calc(global_u8_op2[1]);

		global_u8_operation2=H_KPD_GetPressedKey();
		while(global_u8_operation2==255)
		{
			global_u8_operation2=H_KPD_GetPressedKey();
		}
		H_LCD_Vid_Wrt_CHr( global_u8_operation2);
		switch(global_u8_operation1)
		{
			case '+': global_u8_result=(global_u8_op1[0]*10)+global_u8_op1[1] +(global_u8_op2[0]*10)+global_u8_op2[1];      break;
			case '-': global_u8_result=(global_u8_op1[0]*10)+(global_u8_op1[1]) -(global_u8_op2[0]*10)-global_u8_op2[1];      break;
			case '*': global_u8_result=((global_u8_op1[0]*10)+(global_u8_op1[1])) *((global_u8_op2[0]*10)+(global_u8_op2[1]));  break;
			case '/': global_u8_result=(global_u8_op1[0]*10+global_u8_op1[1]) /(global_u8_op2[0]*10+global_u8_op2[1]);  break;
		}
		sprintf(arr,"%d",global_u8_result);
		H_LCD_Vid_Wrt_Str(arr);
		 _delay_ms(1000);


	}
}
/************function to mapp char to integer numbers*********/
u8 calc(u8 num)
{
	switch(num)
	{
		case '0': num=0;                                                                                            break;
		case '1': num=1 ;                                                                                           break;
		case '2': num=2 ;                                                                                           break;
		case '3': num=3 ;                                                                                           break;
		case '4': num=4 ;                                                                                           break;
		case '5': num=5 ;                                                                                           break;
		case '6': num=6 ;                                                                                           break;
		case '7': num=7 ;                                                                                           break;
		case '8': num=8 ;                                                                                           break;
		case '9': num=9 ;                                                                                           break;
	}
	return num;
}



