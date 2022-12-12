/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _EXI_INT_H
#define  _EXI_INT_H


/*
*possibility of Argument and return 
*/

#define  Low_Level      4
#define  Logic_Change   3
#define  Falling_Edge   2
#define  Rising_Edge    1

/*
*public functions prototypes 
*/


/*
*TO INIT ANY INTERRUPT :
1-feature provides a way of generating a software interrupt. The external interrupts can be triggered by a falling or
rising edge or a low level (INT2 is only an edge triggered interrupt).

2-SET ENABLE FOR EXTERNAL PIN INTERRUPT
3-CLEAR FLAG OF INTERRUPT PIN
*/

void M_EXI_Vid_initINT0(u8 Copy_u8_Sense_control);
void M_EXI_Vid_initINT1(u8 Copy_u8_Sense_control);
void M_EXI_Vid_initINT2(u8 Copy_u8_Sense_control);
//function to call back
void Call_back(void(*func)(void));
#endif
