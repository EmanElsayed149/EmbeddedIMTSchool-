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
#include "LCD_int.h"
#include "LCD_pri.h"
#include "LCD_config.h"


/*
*public functions defintions 
*/


/* LCD INIT FOR 8 BIT */
/************************************************/
void H_LCD_Vid_Int()
{
	/* set pin RS as output */
	M_DIO_Vid_WrtPinDir(LCD_control_Port,RS,M_DIO_OUTPUT);

	/* set pin R/w as output */
	M_DIO_Vid_WrtPinDir(LCD_control_Port,RW,M_DIO_OUTPUT);

	/* set pin E as output */
	M_DIO_Vid_WrtPinDir(LCD_control_Port,E,M_DIO_OUTPUT);

	/*SET data port as output */
	M_DIO_Vid_WrtPortDir(LCD_Data_Port,M_DIO_PORT_OUTPUT);

	/* wait for 30 ms */
	_delay_ms(30);
	H_LCD_Vid_Wrt_Com(SET_8BITS_2LINES);
	_delay_ms(1);
	H_LCD_Vid_Wrt_Com(DISPLAY_ON);
	_delay_ms(1);
	H_LCD_Vid_Wrt_Com(CLEAR_DISPLAY);
	_delay_ms(2);
	H_LCD_Vid_Wrt_Com(ENTRY_MODE);
	_delay_ms(2);

}

/****TO WRITE on lcd you should determine if you want write command (Rs=0) or write data (Rs=1)****/

void H_LCD_Vid_Wrt_CHr(u8 Copy_u8_chr)
{
	/*SET RS AS HIGH FOR DATA REGISTER */
	M_DIO_Vid_wrtPinVal(LCD_control_Port,RS,M_DIO_HIGH);

	/* SET RW PIN AS LOW TO WRITE */
	M_DIO_Vid_wrtPinVal(LCD_control_Port,RW,M_DIO_LOW);


	/********to write data E must in falling and send data*********/

	/*SET E AS HIGH*/
	M_DIO_Vid_wrtPinVal(LCD_control_Port,E,M_DIO_HIGH);

	/*SEND DATA */
	M_DIO_Vid_WrtPortVal(LCD_Data_Port,Copy_u8_chr);
	_delay_ms(10);

	/*set E low*/
	M_DIO_Vid_wrtPinVal(LCD_control_Port,E,M_DIO_LOW);
	_delay_ms(10);

	M_DIO_Vid_wrtPinVal(LCD_control_Port,E,M_DIO_HIGH);
	_delay_ms(10);
}

void H_LCD_Vid_Wrt_Str(u8 *Ptr_u8_str)
{
	u8 local_u8_counter=0;
	while(Ptr_u8_str[local_u8_counter]!= '\0')
	{
		H_LCD_Vid_Wrt_CHr(Ptr_u8_str[local_u8_counter]);
		local_u8_counter++;
	}
}

/****TO WRITE on lcd you should determine if you want write command (Rs=0) or write data (Rs=1)****/
void H_LCD_Vid_Wrt_Com(u8 Copy_u8_Com)
{
	/*SET RS AS HIGH FOR DATA REGISTER */
	M_DIO_Vid_wrtPinVal(LCD_control_Port,RS,M_DIO_LOW);

	/* SET RW PIN AS LOW TO WRITE */
	M_DIO_Vid_wrtPinVal(LCD_control_Port,RW,M_DIO_LOW);

	/*SET E AS HIGH*/
	M_DIO_Vid_wrtPinVal(LCD_control_Port,E,M_DIO_HIGH);

	/*SEND DATA */
	M_DIO_Vid_WrtPortVal(LCD_Data_Port,Copy_u8_Com);
	_delay_ms(10);

	/*set E low*/
	M_DIO_Vid_wrtPinVal(LCD_control_Port,E,M_DIO_LOW);
	_delay_ms(10);

	/*set E HIGH*/
	M_DIO_Vid_wrtPinVal(LCD_control_Port,E,M_DIO_HIGH);
	_delay_ms(10);
}
void H_LCD_Vid_Clear()
{
	H_LCD_Vid_Wrt_Com(CLEAR_DISPLAY);
}
void H_LCD_Vid_GotoRowCol(u8 Copy_u8_Row,u8 Copy_u8_COL)
{
	u8 local_u8_address=0;
	if(Copy_u8_Row==H_LCD_ROW0)
	{
		local_u8_address=Copy_u8_COL+0x00;       //address of  first row is 0x00 and then increase by one for next column
	}else
	{
		local_u8_address=Copy_u8_COL+0x40;       //address of second row is 0x40 and then increase by one for next column
	}
	H_LCD_Vid_Wrt_Com(128+local_u8_address);
}
void H_LCD_Vid_Pnt_Number(u32 num)
{
	u8 digit[5]={0};
	u8 count=0;
	if(num==0){H_LCD_Vid_Wrt_Str("00");}
	else
	{
	    while(num)
	    {
		    digit[count]=num%10;
		    count++;
		    num/=10;
	    }
	    for(int i=count-1;i>=0;i--)
	    {
	    	H_LCD_Vid_Wrt_CHr(digit[i]+'0');
	    }
    }

}
/* ****8interface to print special char*/
void H_LCD_Vid_Wrt_Special_CHr(u8 *Ptr_u8_Pattern,u8 Copy_num_pattern,u8 Copy_u8_xpos,u8 Copy_u8_ypos)
{
	u8 local_u8_address=0;
	local_u8_address=8*Copy_num_pattern;
	H_LCD_Vid_Wrt_Com( 0x40 | local_u8_address);
	for(u8 i=0;i<8;i++)
	{

	}
}
