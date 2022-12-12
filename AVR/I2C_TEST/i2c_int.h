/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _I2C_INT_H
#define  _I2C_INT_H

void M_I2C_Vid_init(void);
void M_I2C_Vid_Start(void);
void M_I2c_Vid_Stop(void);
void M_I2C_Vid_WrtData(u8 Copy_U8_Data);
void M_I2C_U8_ReadData_WithACK(u8* Copy_Ptr_data);
void M_I2C_U8_ReadData_WithNACK(u8* Copy_Ptr_data);
//u8   M_I2C_U8_GETStatus(void);
void M_I2C_Vid_WrtDAddress(u8 Copy_U8_Address,u8 Copy_U8_operation);

/*********probability of arguments **************/

#define   Write_operation    0
#define   Read_operation     1

#endif
