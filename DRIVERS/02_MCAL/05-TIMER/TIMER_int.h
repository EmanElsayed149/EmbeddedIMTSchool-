/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _TIMER_INT_H
#define  _TIMER_INT_H




//**************functions prototypes******************
void M_TIMER_Init(u8 Copy_u8_Mode,u8 Copy_u8_Prescalar,u8 Copy_u8_Preload);



//probabilities of arguments


/*
 * control the counting sequence of the counter
 * the source for the maximum (TOP) counter value,
 * and what type of Waveform Generation to be used
 */
#define   OVERFLOW_Mode     1
#define   CTC_Mode          2
#define   PWM_Mode          3
#define   FAST_pWM_Mode     4



/***********PRESCALAR****************/

#define      Prescalar_1        0
#define      Prescalar_8        1
#define      Prescalar_64       2
#define      Prescalar_256      3
#define      Prescalar_1024     4



#endif
