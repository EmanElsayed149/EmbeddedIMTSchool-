/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef _SPI_REG_H
#define _SPI_REG_H



#define     SPCR         *(( volatile u8 *) 0x2D)
//BITS
#define     SPIE                    7
#define     SPE                     6
#define     DORD                    5
#define     MSTR                    4
#define     CPOL                    3
#define     CPHA                    2
#define     SPR1                    1
#define     SPR0                    0


#define     SPSR         *(( volatile u8 *) 0x2E)
//BITS
#define     SPIF                    7
#define     WCOL                    6
//BIT 5 IS RESERVED
//BIT 4 IS RESERVED
//BIT 3 IS RESERVED
//BIT 2 IS RESERVED
//BIT 1 IS RESERVED
#define     SPI2X                   0

#define     SPDR         *(( volatile u8 *) 0x2F)
#define     MSB                     7
#define     LSB                     0

#endif
