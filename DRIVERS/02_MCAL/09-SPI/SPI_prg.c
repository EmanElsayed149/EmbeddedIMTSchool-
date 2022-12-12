/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

/*file inclusion */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "SPI_reg.h"
#include "SPI_int.h"




/*
*public functions defintions
*/


void M_SPI_Vid_Init_Mastre(void)
{
	//SPI Enable
	SET_BIT(SPCR,SPE);

	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN4,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN7,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN5,M_DIO_OUTPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN6,M_DIO_INPUT);

	/*Data Order
	 * When the DORD bit is written to one, the LSB of the data word is transmitted first.
     *When the DORD bit is written to zero, the MSB of the data word is transmitted first.
	 */
	SET_BIT(SPCR,DORD);

	/*This bit (MSTR) selects Master SPI mode when written to one, and Slave SPI mode when written logic
     *zero.*/
	SET_BIT(SPCR,MSTR);

	//CPOL: Clock Polarity
	/*When this bit is written to one, SCK is high when idle. When CPOL is written to zero, SCK is low
     *when idle.*/
	SET_BIT(SPCR,CPOL);

	/*(CPHA) determine if data is sampled(RECIEVE) on the leading (first) or
     *trailing (last) edge of SCK.*/
	SET_BIT(SPCR,CPHA);

	/*SPR1, SPR0: SPI Clock Rate Select 1 and 0*/
	CLR_BIT(SPCR,SPR0);
	CLR_BIT(SPCR,SPR1);
	CLR_BIT(SPSR,SPI2X);


}
void M_SPI_Vid_Init_Slave(void)
{
	//SPI Enable
	SET_BIT(SPCR,SPE);


	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN4,M_DIO_INPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN7,M_DIO_INPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN5,M_DIO_INPUT);
	M_DIO_Vid_WrtPinDir(M_DIO_PORTB,M_DIO_PIN6,M_DIO_OUTPUT);

	/*Data Order
	 * When the DORD bit is written to one, the LSB of the data word is transmitted first.
     *When the DORD bit is written to zero, the MSB of the data word is transmitted first.
	 */
	SET_BIT(SPCR,DORD);

	/*This bit (MSTR) selects Master SPI mode when written to one, and Slave SPI mode when written logic
     *zero.*/
	CLR_BIT(SPCR,MSTR);

	//CPOL: Clock Polarity
	/*When this bit is written to one, SCK is high when idle. When CPOL is written to zero, SCK is low
     *when idle.*/
	SET_BIT(SPCR,CPOL);

	/*(CPHA) determine if data is sampled(RECIEVE) on the leading (first) or
     *trailing (last) edge of SCK.*/
	SET_BIT(SPCR,CPHA);

}
u8   M_SPI_U8_Send_Recieve(u8 Copy_U8_data)
{
	SPDR=Copy_U8_data;
	while(GIT_BIT(SPSR,SPIF)==0);
	return SPDR;

}
