/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef _ADC_INT_H
#define _ADC_INT_H


/*
*******************possibility of Argument and return****************************
*/

/*****************number of channel***************************************/

#define    ADC_Channel0    0
#define    ADC_Channel1    1
#define    ADC_Channel2    2
#define    ADC_Channel3    3
#define    ADC_Channel4    4
#define    ADC_Channel5    5
#define    ADC_Channel6    6
#define    ADC_Channel7    7

/*******************prescalar*****************************************/

#define    Prescalar_128   0
#define    Prescalar_64    1
#define    Prescalar_32    2
#define    Prescalar_16    3
#define    Prescalar_8     4
#define    Prescalar_4     5
#define    Prescalar_2     6

/***************adjustification**********************/
#define    Right_Adjusted  0
#define    Left_Adjusted   1


/*
********************************public functions prototypes**************************
*/

void M_ADC_Vid_Init(u8 Copy_u8_prescalar,u8 Copy_u8_adjustfication);
u16 M_ADC_U16_ReadDigital(u8 Copy_u8_Channel);




#endif
