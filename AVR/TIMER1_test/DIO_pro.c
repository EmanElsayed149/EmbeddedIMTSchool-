/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

/*file inclusion */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "DIO_reg.h"


/*
*public functions defintions 
*/

void M_DIO_Vid_WrtPinDir(u8 copy_u8_port,u8 copy_u8_pin,u8 copy_u8_direcrion)
{
	switch(copy_u8_port)
	{
		case M_DIO_PORTA: WRT_BIT(DDRA,copy_u8_pin,copy_u8_direcrion); break;
		case M_DIO_PORTB: WRT_BIT(DDRB,copy_u8_pin,copy_u8_direcrion); break;
		case M_DIO_PORTC: WRT_BIT(DDRC,copy_u8_pin,copy_u8_direcrion); break;
		case M_DIO_PORTD: WRT_BIT(DDRD,copy_u8_pin,copy_u8_direcrion); break;
		default:break;
	}
}
void M_DIO_Vid_wrtPinVal(u8 copy_u8_Port,u8 copy_u8_Pin,u8 copy_u8_pinVal)
{
	switch(copy_u8_Port)
	{
		case M_DIO_PORTA: WRT_BIT(PORTA,copy_u8_Pin,copy_u8_pinVal); break;
		case M_DIO_PORTB: WRT_BIT(PORTB,copy_u8_Pin,copy_u8_pinVal); break;
		case M_DIO_PORTC: WRT_BIT(PORTC,copy_u8_Pin,copy_u8_pinVal); break;
		case M_DIO_PORTD: WRT_BIT(PORTD,copy_u8_Pin,copy_u8_pinVal); break;
		default:break;
	}
}
u8  M_DIO_u8_READPinVal (u8 copy_u8_Port,u8 copy_u8_Pin)
{
	u8 local_u8_pinval=0;
	switch(copy_u8_Port)
	{
		case M_DIO_PORTA: local_u8_pinval = GIT_BIT(PINA,copy_u8_Pin); break;
		case M_DIO_PORTB: local_u8_pinval = GIT_BIT(PINB,copy_u8_Pin); break;
		case M_DIO_PORTC: local_u8_pinval = GIT_BIT(PINC,copy_u8_Pin); break;
		case M_DIO_PORTD: local_u8_pinval = GIT_BIT(PIND,copy_u8_Pin); break;
		default:break;
	}
	return local_u8_pinval;
}
void M_DIO_Vid_WrtPortDir(u8 copy_u8_port,u8 copy_u8_Portdirecrion)
{
	switch(copy_u8_port)
	{
		case M_DIO_PORTA: DDRA = copy_u8_Portdirecrion; break;
		case M_DIO_PORTB: DDRB = copy_u8_Portdirecrion; break;
		case M_DIO_PORTC: DDRC = copy_u8_Portdirecrion; break;
		case M_DIO_PORTD: DDRD = copy_u8_Portdirecrion; break;
	}
}
void M_DIO_Vid_WrtPortVal(u8 copy_u8_port,u8 copy_u8_PortVal)
{
	switch(copy_u8_port)
	{
		case M_DIO_PORTA: PORTA = copy_u8_PortVal ; break;
		case M_DIO_PORTB: PORTB = copy_u8_PortVal ; break;
		case M_DIO_PORTC: PORTC = copy_u8_PortVal ; break;
		case M_DIO_PORTD: PORTD = copy_u8_PortVal ; break;
	}
}
u8 M_DIO_u8_ReadPortVal(u8 copy_u8_Port)
{
	u8 local_u8_portVal=0;
	switch(copy_u8_Port)
	{
		case M_DIO_PORTA: local_u8_portVal = PINA ; break;
		case M_DIO_PORTB: local_u8_portVal = PINB ; break;
		case M_DIO_PORTC: local_u8_portVal = PINC ; break;
		case M_DIO_PORTD: local_u8_portVal = PIND ; break;
	}
	return local_u8_portVal;
}
