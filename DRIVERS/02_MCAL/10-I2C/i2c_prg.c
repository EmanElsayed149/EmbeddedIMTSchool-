/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "i2c_reg.h"
#include "i2c_int.h"


void M_I2C_Vid_init(void)
{
	//set fre as 100 khz
	/*TWBR should equal 8
	 * prescalar=1
	 */
	CLR_BIT(TWSR,TWPS0);
	CLR_BIT(TWSR,TWPS1);
	TWBR=2;
}
void M_I2C_Vid_Start(void)
{
	//SET ENABLE OF TWI
	SET_BIT(TWCR,TWEN);
	//CLEAR FLAG AFTER ANY OPERATION
	SET_BIT(TWCR,TWINT);
	//ENABLE START CONDTION
	SET_BIT(TWCR,TWSTA);
	while(GIT_BIT(TWCR,TWINT)==0);
	//DISABLE START CONDTION
	CLR_BIT(TWCR,TWSTA);
}
void M_I2c_Vid_Stop(void)
{
	//CLEAR FLAG AFTER ANY OPERATION
	SET_BIT(TWCR,TWINT);
	//ENABLE STOP CONDTION
	SET_BIT(TWCR,TWSTO);
	while(GIT_BIT(TWCR,TWINT)==0);
}
void M_I2C_Vid_WrtData(u8 Copy_U8_Data)
{
	//CLEAR FLAG AFTER ANY OPERATION
	SET_BIT(TWCR,TWINT);
	//PUT DATA IN TWDR REGISTER
	TWDR=Copy_U8_Data;
	while(GIT_BIT(TWCR,TWINT)==0);

}
void M_I2C_Vid_WrtDAddress(u8 Copy_U8_Address,u8 Copy_U8_operation)
{
	//CLEAR FLAG AFTER ANY OPERATION
	SET_BIT(TWCR,TWINT);
	//SET ENABLE OF TWI
	SET_BIT(TWCR,TWEN);
	TWDR=0x10;//(Copy_U8_Address<<1)|(Copy_U8_operation);
	//wait for flag
	while(GIT_BIT(TWCR,TWINT)==0);

}
void  M_I2C_U8_ReadData_WithACK(u8* Copy_Ptr_data)
{
	//CLEAR FLAG AFTER ANY OPERATION
	SET_BIT(TWCR,TWINT);
	*Copy_Ptr_data=TWDR;
	//wait for flag
	while(GIT_BIT(TWCR,TWINT)==0);
	//ENABLE  ACK
	SET_BIT(TWCR,TWEA);
}
void  M_I2C_U8_ReadData_WithNACK(u8* Copy_Ptr_data)
{
	//CLEAR FLAG AFTER ANY OPERATION
	SET_BIT(TWCR,TWINT);
	*Copy_Ptr_data=TWDR;
	//wait for flag
	while(GIT_BIT(TWCR,TWINT)==0);
	//DISABLE  ACK
	CLR_BIT(TWCR,TWEA);
}
//u8   M_I2C_U8_GETStatus(void)
