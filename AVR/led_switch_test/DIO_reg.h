/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _DIO_REG_H
#define  _DIO_REG_H

 /* PORT A Related Registers */
#define   PORTA      *( (volatile u8*) 0x3B )  
#define   DDRA       *( (volatile u8*) 0x3A )
#define   PINA       *( (volatile u8*) 0x39 )


 /* PORT B Related Registers */
#define   PORTB      *( (volatile u8*) 0x38 )
#define   DDRB       *( (volatile u8*) 0x37 )
#define   PINB       *( (volatile u8*) 0x36 )


 /* PORT C Related Registers */
#define   PORTC      *( (volatile u8*) 0x35 )
#define   DDRC       *( (volatile u8*) 0x34 )
#define   PINC       *( (volatile u8*) 0x33 )


 /* PORT D Related Registers */
#define   PORTD      *( (volatile u8*) 0x32 )
#define   DDRD       *( (volatile u8*) 0x31 )
#define   PIND       *( (volatile u8*) 0x30 )




#endif
