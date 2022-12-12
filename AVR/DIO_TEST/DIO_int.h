/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _DIO_INT_H
#define  _DIO_INT_H


/*
*possibility of Argument and return 
*/

typedef enum
{
	/* PORT ID */
	M_DIO_PORTA,
	M_DIO_PORTB,
	M_DIO_PORTC,
	M_DIO_PORTD,
	
	/* PIN NUMBERS*/
	M_DIO_PIN0=0,
	M_DIO_PIN1,
	M_DIO_PIN2,
	M_DIO_PIN3,
	M_DIO_PIN4,
	M_DIO_PIN5,
	M_DIO_PIN6,
	M_DIO_PIN7,
	
	/* DIRECTION pin*/
	M_DIO_INPUT=0,
	M_DIO_OUTPUT,
	
	/*PORT DIRECTION*/
	M_DIO_PORT_INPUT=0,
	M_DIO_PORT_OUTPUT=255,


	/*PIN  VALUE ID*/
	M_DIO_LOW=0,
	M_DIO_HIGH ,
	

	/*PORT VALUE ID*/
	M_DIO_PORT_LOW = 0,
	M_DIO_PORT_HIGH=255

}DIO_CONFIG;

/*
*public functions prototypes 
*/

void M_DIO_Vid_WrtPinDir(u8 copy_u8_port,u8 copy_u8_pin,u8 copy_u8_Pindirecrion);
void M_DIO_Vid_wrtPinVal(u8 copy_u8_Port,u8 copy_u8_Pin,u8 copy_u8_pinVal);
u8   M_DIO_u8_READPinVal (u8 copy_u8_Port,u8 copy_u8_Pin);
void M_DIO_Vid_WrtPortDir(u8 copy_u8_port,u8 copy_u8_Portdirecrion);
void M_DIO_Vid_WrtPortVal(u8 copy_u8_port,u8 copy_u8_PortVal);
u8   M_DIO_u8_ReadPortVal(u8 copy_u8_Port);

#endif
