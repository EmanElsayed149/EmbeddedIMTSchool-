/*
*Name     :Eman Elsayed
*Layer    :HAL
*version  :V1.0 - 01/OCT/2021
*/

/*file inclusion */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "util/delay.h"
#include "DIO_int.h"
#include "KEYPAD_int.h"
#include "KEYPAD_pri.h"
#include "KEYPAD_config.h"

/*****function to define pins of ROWS and columns****/
void H_KPD_Init(void)
{
	/*SET ROW AS INPUT */
	M_DIO_Vid_WrtPinDir(H_KPD_Port,H_KPD_Row1_Pin,M_DIO_INPUT);
	M_DIO_Vid_WrtPinDir(H_KPD_Port,H_KPD_ROW2_Pin,M_DIO_INPUT);
	M_DIO_Vid_WrtPinDir(H_KPD_Port,H_KPD_ROW3_Pin,M_DIO_INPUT);
	M_DIO_Vid_WrtPinDir(H_KPD_Port,H_KPD_ROW4_Pin,M_DIO_INPUT);

	/*SET COLUMN AS OUTPUT */
	M_DIO_Vid_WrtPinDir(H_KPD_Port,H_KPD_COL1_Pin,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(H_KPD_Port,H_KPD_COL2_Pin,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(H_KPD_Port,H_KPD_COL3_Pin,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(H_KPD_Port,H_KPD_COL4_Pin,M_DIO_OUTPUT);

	/*SET PULL UP AND COLUMNS AS HIGH */
	M_DIO_Vid_WrtPortVal(H_KPD_Port,0xff);
}

/*function to return value pressed using mapping*/
u8   H_KPD_GetPressedKey(void)
{
	u8 local_u8_pressedkey=255;

	/*loop for each colmn and set it low*/
	for(u8 local_u8_col = H_KPD_COL1_Pin ; local_u8_col <= H_KPD_COL4_Pin ; local_u8_col++)
	{
		/*set COLUMNS low*/
		M_DIO_Vid_wrtPinVal(H_KPD_Port,local_u8_col,M_DIO_LOW);

		/*CREAT LOOP FOR ROW*/
		for(u8 local_u8_row = H_KPD_Row1_Pin ; local_u8_row <= H_KPD_ROW4_Pin ; local_u8_row++)
		{
			if(M_DIO_u8_READPinVal(H_KPD_Port,local_u8_row)==0)
			{
				local_u8_pressedkey=global_arr_u8_keypadmapping[local_u8_col-4][local_u8_row];
				while(M_DIO_u8_READPinVal(H_KPD_Port,local_u8_row)==0);
			}
			_delay_ms(20);
		}

		/*set COLUMNS HIGH*/
		M_DIO_Vid_wrtPinVal(H_KPD_Port,local_u8_col,M_DIO_HIGH);


	}
	
	return local_u8_pressedkey;
}
