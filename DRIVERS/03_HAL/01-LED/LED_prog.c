/*file inclusion */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "DIO_reg.h"
#include "LED_int.h"

/*
*public functions defintions 
*/


/* function to define pin is output */
void H_Led_Vid_Int(u8 Copy_u8_Port,u8 Copy_u8_Pin)
{
	M_DIO_Vid_WrtPinDir(Copy_u8_Port,Copy_u8_Pin,M_DIO_OUTPUT);
}

/*function to determine led state (on/off)*/
void H_Led_Vid_State(u8 Copy_u8_Port,u8 Copy_u8_Pin,u8 Copy_u8_state)
{
	M_DIO_Vid_wrtPinVal(Copy_u8_Port,Copy_u8_Pin,Copy_u8_state);
}
