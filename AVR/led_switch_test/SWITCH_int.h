/*
*Name     :Eman Elsayed
*Layer    :HAL
*version  :V1.0 - 07/OCT/2021
*/

#ifndef _SWITCH_INT_H
#define _SWITCH_INT_H

/* ****** funcyion to determine switch pin as input and turn on pull up mode**********/
void H_Switch_Vid_Int(u8 Copy_u8_Port,u8 Copy_u8_Pin);



/****************function to return read on switch**************/
u8 H_Switch_u8_read(u8 Copy_u8_Port,u8 Copy_u8_Pin);


#endif
