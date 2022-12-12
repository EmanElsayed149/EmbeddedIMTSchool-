/*
*Name     :Eman Elsayed
*Layer    :HAL
*version  :V1.0 - 07/OCT/2021
*/
#ifndef _LED_INT_H
#define _LED_INT_H

typedef enum
{
	LED_OFF=0,
	LED_ON
}LED_State;

void H_Led_Vid_Int(u8 Copy_u8_Port,u8 Copy_u8_Pin);
void H_Led_Vid_State(u8 Copy_u8_Port,u8 Copy_u8_Pin,u8 Copy_u8_state);

#endif