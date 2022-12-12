/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

/*file inclusion */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "DIO_reg.h"


/*
*public functions defintions
*/


/*  funcyion to determine switch pin as input and turn on pull up mode*/
void H_Switch_Vid_Int(u8 Copy_u8_Port,u8 Copy_u8_Pin)
{
	M_DIO_Vid_WrtPinDir(Copy_u8_Port,Copy_u8_Pin,M_DIO_INPUT);
	M_DIO_Vid_wrtPinVal(Copy_u8_Port,Copy_u8_Pin,M_DIO_HIGH);
}

/*function to return read on switch*/
u8 H_Switch_u8_read(u8 Copy_u8_Port,u8 Copy_u8_Pin)
{
	u8 local_u8_state=0;
	local_u8_state=M_DIO_u8_READPinVal( Copy_u8_Port,Copy_u8_Pin);
	return local_u8_state;
}
