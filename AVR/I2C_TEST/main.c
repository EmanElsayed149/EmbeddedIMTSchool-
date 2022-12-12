/*
 * main.c
 *
 *  Created on: Dec 9, 2021
 *      Author: Dell
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "i2c_int.h"

int main(void)
{
	M_I2C_Vid_init();
	M_I2C_Vid_Start();
	M_I2C_Vid_WrtDAddress(0x50,Write_operation);
	M_I2C_Vid_WrtData('9');
	//M_I2C_Vid_Start();
	M_I2c_Vid_Stop();
	while(1)
	{
	}
}

