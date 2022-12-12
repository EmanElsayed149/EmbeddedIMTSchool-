/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _TIMER_REG_H
#define  _TIMER_REG_H



/*************************************************TCCR0******************************************************************/
#define             TCCR0            *((volatile u8 *)0x53)   // Timer/Counter Control Register
//***************bits for register TCCR0*******************
#define             FOC0                  7          // Force Output Compare
#define             WGM00                 6          //Bit 6, 3 – WGM01:0: Waveform Generation Mode

#define             COM01                 5          //Bit 5:4 – COM01:0: Compare Match Output Mode
#define             COM00                 4          //Bit 5:4 – COM01:0: Compare Match Output Mode

#define             WGM01                 3          //Bit 6, 3 – WGM01:0: Waveform Generation Mode

#define             CS02                  2         //Bit 2:0 – CS02:0: Clock Select
#define             CS01                  1         //Bit 2:0 – CS02:0: Clock Select
#define             CS00                  0         //Bit 2:0 – CS02:0: Clock Select



/*************************************************TCNT0******************************************************************/
#define             TCNT0            *((volatile u8 *)0x52)




/*****************************************************OCR0**************************************************************/
/*
 * The Output Compare Register contains an 8-bit value that is continuously compared with the
 * counter value (TCNT0)
 */
#define             OCR0             *((volatile u8 *)0x5C)



/*************************************************TIMSK******************************************************************/
#define             TIMSK            *((volatile u8 *)0x59)
//BITS for REGISTER TIMSK
#define             TOIE0                 0        //Bit 0 – TOIE0: Timer/Counter0 Overflow Interrupt Enable
#define             OCIE0                 1        //Bit 1 – OCIE0: Timer/Counter0 Output Compare Match Interrupt Enable



/*************************************************TIFR******************************************************************/
#define             TIFR             *((volatile u8 *)0x58)
//BITS for REGISTER TIFR
#define             OCF0                  1        //Bit 1 – OCF0: Output Compare Flag 0
#define             TOV0                  0        //Bit 0 – TOV0: Timer/Counter0 Overflow Flag

#endif
