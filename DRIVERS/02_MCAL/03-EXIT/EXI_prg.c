/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

/*file inclusion */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "util/delay.h"
#include "EXI_reg.h"
#include "EXI_int.h"
#include "DIO_int.h"


//global pointer to function
void (*global_ptr_func)(void);

/*
*public functions defintions 
*/

void M_EXI_Vid_initINT0(u8 Copy_u8_Sense_control)
{

	/*set pull up mode for switch*/
	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,2,M_DIO_INPUT);
	M_DIO_Vid_wrtPinVal(M_DIO_PORTD,2,M_DIO_HIGH);

	/*determine sense control*/
	if(Copy_u8_Sense_control==Low_Level)
	{
		CLR_BIT(MCUCR,ISC01);
		CLR_BIT(MCUCR,ISC00);
		
	}else if(Copy_u8_Sense_control==Logic_Change)
	{
		SET_BIT(MCUCR,ISC00);
		CLR_BIT(MCUCR,ISC01);
		
	}else if(Copy_u8_Sense_control==Falling_Edge)
	{
		CLR_BIT(MCUCR,ISC00);
		SET_BIT(MCUCR,ISC01);
		
	}else if(Copy_u8_Sense_control==Rising_Edge)
	{
		
		SET_BIT(MCUCR,ISC00);
		SET_BIT(MCUCR,ISC01);
	}
	
	/*set Enable of interrupt*/
	SET_BIT(GICR,INT0);
	
}
void M_EXI_Vid_initINT1(u8 Copy_u8_Sense_control)
{

	/*set pull up mode for switch*/
	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,3,M_DIO_INPUT);
	M_DIO_Vid_wrtPinVal(M_DIO_PORTD,3,M_DIO_HIGH);

	/*determine sense control*/
	if(Copy_u8_Sense_control==Low_Level)
	{
		CLR_BIT(MCUCR,ISC10);
		CLR_BIT(MCUCR,ISC11);
		
	}else if(Copy_u8_Sense_control==Logic_Change)
	{
		SET_BIT(MCUCR,ISC10);
		CLR_BIT(MCUCR,ISC11);
		
	}else if(Copy_u8_Sense_control==Falling_Edge)
	{
		CLR_BIT(MCUCR,ISC10);
		SET_BIT(MCUCR,ISC11);
		
	}else if(Copy_u8_Sense_control==Rising_Edge)
	{
		
		SET_BIT(MCUCR,ISC10);
		SET_BIT(MCUCR,ISC11);
	}
	
	/*set Enable of interrupt*/
	SET_BIT(GICR,INT1);
	
}
void M_EXI_Vid_initINT2(u8 Copy_u8_Sense_control)
{
	/*set pull up mode for switch*/
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,2,M_DIO_INPUT);
	M_DIO_Vid_wrtPinVal(M_DIO_PORTB,2,M_DIO_HIGH);

	/*determine sense control*/
	if(Copy_u8_Sense_control==Falling_Edge)
	{
		CLR_BIT(MCUCSR,ISC2);
		
	}else if(Copy_u8_Sense_control==Rising_Edge)
	{
		
		SET_BIT(MCUCSR,ISC2);
	}
	
	/*set Enable of interrupt*/
	SET_BIT(GICR,INT2);
	
	
}


//function to call back
void Call_back(void(*func)(void))
{
	global_ptr_func=func;
}

/* ISR for INT 0*/
void __vector_1(void)__attribute__((signal));
void __vector_1(void){
	/* Function which should be executed when enterrupt occur*/
	global_ptr_func();

}

/* ISR for INT 1*/
void __vector_2(void)__attribute__((signal));
void __vector_2(void){
	/* Function which should be executed when enterrupt occur*/
	M_DIO_Vid_wrtPinVal(M_DIO_PORTD,1,M_DIO_LOW);
}

/* ISR for INT 3*/
void __vector_3(void)__attribute__((signal));
void __vector_3(void){

}
