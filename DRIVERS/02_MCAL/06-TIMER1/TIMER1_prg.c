#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "TIMER1_int.h"
#include "TIMER1_reg.h"

void (*FUNC)(void);

void M_TIMER1_Vid_Init()
{
	/*******set mode*************/
	CLR_BIT(TCCR1A,WGM10);
	SET_BIT(TCCR1A,WGM11);
	SET_BIT(TCCR1B,WGM13);
	SET_BIT(TCCR1B,WGM12);

	/*
	 * seclect channle
	 * TO COMPARE MATCH
	 * AND NON INVERTED PWM
	 */
	CLR_BIT(TCCR1A,COM1A0);
	SET_BIT(TCCR1A,COM1A1);
	//CLR_BIT(TCCR1A,COM1B0);
	//SET_BIT(TCCR1A,COM1B1);

	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,M_DIO_PIN5,M_DIO_OUTPUT);
	//M_DIO_Vid_WrtPinDir(M_DIO_PORTD,M_DIO_PIN4,M_DIO_OUTPUT);

	/*PRESCALAR*/
	SET_BIT(TCCR1B,CS10);
	SET_BIT(TCCR1B,CS11);
	CLR_BIT(TCCR1B,CS12);


	/*COUNTS TOP*/
	ICR1=2500;


}
void M_TIMER1_Vid_SetDuty(u16 Copy_u16_Dutycycle)
{
	OCR1A=Copy_u16_Dutycycle;
	//OCR1B=1000-Copy_u16_Dutycycle;
}

void M_TIMER1_Vid_ICUInit(void)
{
	/***SET PIN AS ICU AT PORTD PIN 6***/
	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,M_DIO_PIN6,M_DIO_INPUT);

	/***SET PRESCALAR****/
	SET_BIT(TCCR1B,CS10);
	CLR_BIT(TCCR1B,CS11);
	CLR_BIT(TCCR1B,CS12);

	/**SELECT MODE AS NORMAL**/
	CLR_BIT(TCCR1A,WGM10);
	CLR_BIT(TCCR1A,WGM11);
	CLR_BIT(TCCR1B,WGM12);
	CLR_BIT(TCCR1B,WGM13);

	/***SET EDGE AS RISING EDGE***/
	SET_BIT(TCCR1B,ICES1);

	/***set INTERRUPT  enable icu****/
	SET_BIT(TIMSK,TICIE1);
}
void M_TIMER1_Vid_ICUResetTimer(void)
{
	TCNT1=0;
}
u16 M_TIMER1_U16_ICUGetValue(void)
{
	return ICR1;
}
void M_TIMER1_Vid_ICUSetEdge(u8 Copy_u8_set_edge)
{
	if(Copy_u8_set_edge==RISING_EDGE)
	{
		SET_BIT(TCCR1B,ICES1);
	}
	else if(Copy_u8_set_edge==FALLING_EDGE)
	{
		CLR_BIT(TCCR1B,ICES1);
	}
}
void M_TIMER1_Vid_DeInit(void)
{
	TCNT1=0;
	ICR1=0;
	CLR_BIT(TIMSK,TICIE1);
}
void ICU_CALL_BACK(void (*ICU_callback)(void))
{
	FUNC=ICU_callback;
}

void __vector_6 (void)__attribute__((signal));
void __vector_6 (void)
{
	FUNC();
}


