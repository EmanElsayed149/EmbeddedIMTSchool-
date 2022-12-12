/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _UART_INT_H
#define  _UART_INT_H


void M_UART_Vid_Init(void);
void M_UART_Vid_SendData(u8 Copy_U8_data);
u8 M_UART_U8_RecieveData(void);
void M_UART_Vid_SendString(u8* Copy_PtrU8_String);
void M_UART_Vid_RecieveString(u8* Copy_PtrU8_String);
#endif
