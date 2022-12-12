/*
 * main.c
 *
 *  Created on: Oct 22, 2021
 *      Author: Dell
 */

/*file inclusion */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "ADC_int.h"
#include "LCD_int.h"
#include "string.h"
u8 arr[15]={0};
int main(void)
{
	u16 temp;
	M_ADC_Vid_Init(Prescalar_128,Right_Adjusted);
	H_LCD_Vid_Int();
	u16 local_digital_read;
	while(1)
	{
		//local_digital_read=M_ADC_U16_ReadDigital(ADC_Channel0);
		//0temp=(local_digital_read*5000UL/1024)/10 ;
		temp=M_ADC_U16_ReadDigital(ADC_Channel0);
		sprintf(arr,"%d",temp);
		H_LCD_Vid_GotoRowCol(H_LCD_ROW0,H_LCD_COL00);
		H_LCD_Vid_Wrt_Str(arr);
	}
}
