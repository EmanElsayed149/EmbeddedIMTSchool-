/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

/*file inclusion */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "ADC_reg.h"
#include "ADC_int.h"

/*
*public functions defintions
*/

void M_ADC_Vid_Init(u8 Copy_u8_prescalar,u8 Copy_u8_adjustfication)
{
	/***** SET ENABLE *********/
	SET_BIT(ADCSRA,ADEN);


	/*********SET ADjustification******/
	if(Copy_u8_adjustfication == Right_Adjusted)
	{
		CLR_BIT(ADMUX,ADLAR);
	}else if(Copy_u8_adjustfication == Left_Adjusted)
	{
		SET_BIT(ADMUX,ADLAR);
	}


	/********set prescalar AT 128********/
	if(Copy_u8_prescalar == Prescalar_128)
	{
		SET_BIT(ADCSRA,ADPS2);
		SET_BIT(ADCSRA,ADPS1);
		SET_BIT(ADCSRA,ADPS0);
	}else if(Copy_u8_prescalar == Prescalar_64)
	{
		SET_BIT(ADCSRA,ADPS2);
		SET_BIT(ADCSRA,ADPS1);
		CLR_BIT(ADCSRA,ADPS0);
	}else if(Copy_u8_prescalar == Prescalar_32)
	{
		SET_BIT(ADCSRA,ADPS2);
		CLR_BIT(ADCSRA,ADPS1);
		SET_BIT(ADCSRA,ADPS0);
	}else if(Copy_u8_prescalar == Prescalar_16)
	{
		SET_BIT(ADCSRA,ADPS2);
		CLR_BIT(ADCSRA,ADPS1);
		CLR_BIT(ADCSRA,ADPS0);
	}else if(Copy_u8_prescalar == Prescalar_8)
	{
		CLR_BIT(ADCSRA,ADPS2);
		SET_BIT(ADCSRA,ADPS1);
		SET_BIT(ADCSRA,ADPS0);
	}else if(Copy_u8_prescalar == Prescalar_4)
	{
		CLR_BIT(ADCSRA,ADPS2);
		SET_BIT(ADCSRA,ADPS1);
		CLR_BIT(ADCSRA,ADPS0);
	}else if(Copy_u8_prescalar == Prescalar_2)
	{
		CLR_BIT(ADCSRA,ADPS2);
		CLR_BIT(ADCSRA,ADPS1);
		SET_BIT(ADCSRA,ADPS0);
	}else
	{
		CLR_BIT(ADCSRA,ADPS2);
		CLR_BIT(ADCSRA,ADPS1);
		CLR_BIT(ADCSRA,ADPS0);
	}

	/*set refence value */
	SET_BIT(ADMUX,REFS0);
	CLR_BIT(ADMUX,REFS1);

}
u16 M_ADC_U16_ReadDigital(u8 Copy_u8_Channel)
{
	u16 Local_u16_Read;

	/*select channel*/
	ADMUX=(ADMUX&0b11100000)|(Copy_u8_Channel);

	/*start conversion*/
	SET_BIT(ADCSRA,ADSC);

	/*busy_wait pooling*/
	while(GIT_BIT(ADCSRA,ADIF)!=1);

	/*CLEAR BIT*/
	SET_BIT(ADCSRA,ADIF);

	Local_u16_Read=ADC_DATA;
	return Local_u16_Read;
}
