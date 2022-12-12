#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "TIMER1_int.h"
#include "TIMER1_reg.h"

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

	M_DIO_Vid_WrtPinDir(M_DIO_PORTD,M_DIO_PIN5,M_DIO_OUTPUT);

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
}
