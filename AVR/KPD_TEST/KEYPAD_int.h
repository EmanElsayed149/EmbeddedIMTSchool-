/*
*Name     :Eman Elsayed
*Layer    :HAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _KEYPAD_INT_H
#define  _KEYPAD_INT_H


/*
*prototypes of function 
*/

#define NOT_pressed 200;

/*****function to define pins of ROWS and columns****/
void H_KPD_Init(void);

/*function to return value pressed using mapping*/
u8   H_KPD_GetPressedKey(void);


#endif
