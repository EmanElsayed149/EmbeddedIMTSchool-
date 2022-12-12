/*file inclusion */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "TIMER_reg.h"
#include "TIMER_int.h"



//global pointer to function
void (*global_ptr_func)(void);

void M_TIMER_Init(u8 Copy_u8_Mode,u8 Copy_u8_Prescalar,u8 Copy_u8_Preload)
{

	//set enable timer 0
	SET_BIT(TIFR,0);

	/***************8set mode *****************/

	if(Copy_u8_Mode== OVERFLOW_Mode)
	{
		//***************************SET OVERFLOW MODE**********
		CLR_BIT(TCCR0,WGM00);
	    CLR_BIT(TCCR0,WGM01);

		//enable timer interrupt enable for oveflow event
		SET_BIT(TIMSK,TOIE0);

		/*SET PRELOAD*/
		TCNT0=Copy_u8_Preload;

	}else if(Copy_u8_Mode== CTC_Mode)
	{
		//***************************SET CTC MODE**************
		CLR_BIT(TCCR0,WGM00);
	    SET_BIT(TCCR0,WGM01);
	}else if(Copy_u8_Mode== PWM_Mode)
	{
		//***************************SET PWM MODE*************
		SET_BIT(TCCR0,WGM00);
		CLR_BIT(TCCR0,WGM01);
	}else if(Copy_u8_Mode== FAST_pWM_Mode)
	{
		//***************************SET fast PWM MODE****************
		SET_BIT(TCCR0,WGM01);
	    SET_BIT(TCCR0,WGM00);

	    /*********set fast pwm as non inverted */
	    CLR_BIT(TCCR0,COM00);
	    SET_BIT(TCCR0,COM01);

	    /**********SET VALUE OF COMPARE MATCH**********/
	    OCR0=200;
	}


	/******************SET PRESCALAR*************************/

	if(Copy_u8_Prescalar==Prescalar_1)
	{
		SET_BIT(TCCR0,CS00);
		CLR_BIT(TCCR0,CS01);
		CLR_BIT(TCCR0,CS02);

	}else if(Copy_u8_Prescalar==Prescalar_8)
	{
		CLR_BIT(TCCR0,CS00);
		SET_BIT(TCCR0,CS01);
		CLR_BIT(TCCR0,CS02);

	}else if(Copy_u8_Prescalar==Prescalar_64)
	{
		SET_BIT(TCCR0,CS00);
		SET_BIT(TCCR0,CS01);
		CLR_BIT(TCCR0,CS02);

	}else if(Copy_u8_Prescalar==Prescalar_256)
	{
		CLR_BIT(TCCR0,CS00);
		CLR_BIT(TCCR0,CS01);
		SET_BIT(TCCR0,CS02);

	}else if(Copy_u8_Prescalar==Prescalar_1024)
	{
		SET_BIT(TCCR0,CS00);
		CLR_BIT(TCCR0,CS01);
		SET_BIT(TCCR0,CS02);

	}else
	{
		CLR_BIT(TCCR0,CS00);
		CLR_BIT(TCCR0,CS01);
		CLR_BIT(TCCR0,CS02);

	}

}

void CALL_BACK(void(*func)(void))
{
	//global pointer to function
	global_ptr_func=func ;
}

void __vector_11(void)__attribute__((signal));
void __vector_11(void)
{
	global_ptr_func();
}
