/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _I2C_REG_H
#define  _I2C_REG_H



#define     TWBR     *( (volatile u8 * ) 0x20 )
//BITS
#define     TWBR7           7
#define     TWBR6           6
#define     TWBR5           5
#define     TWBR4           4
#define     TWBR3           3
#define     TWBR2           2
#define     TWBR1           1
#define     TWBR0           0


#define     TWCR     *( (volatile u8 * ) 0x56 )
//bits
#define     TWINT            7
#define     TWEA             6
#define     TWSTA            5
#define     TWSTO            4
#define     TWWC             3
#define     TWEN             2
//BIT 1 IS RESERVED
#define     TWIE             0

#define     TWSR     *( (volatile u8 * ) 0x21 )
//BITS
#define     TWS7             7
#define     TWS6             6
#define     TWS5             5
#define     TWS4             4
#define     TWS3             3
//BIT 2 IS RESERVED
#define     TWPS1            1
#define     TWPS0            0

#define     TWDR     *( (volatile u8 * ) 0x23 )

#define     TWAR     *( (volatile u8 * ) 0x22 )

#endif
