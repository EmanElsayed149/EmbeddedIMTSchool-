/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

#ifndef  _EXI_REG_H
#define  _EXI_REG_H


/*EXIT :External pin interrupt
*this is prephiral sensetive to digital logic
 */
 
 
/**********************register of EXIT***********/
#define  MCUCR   *((volatile u8*)0x55)
#define  MCUCSR  *((volatile u8*)0x54)
#define  GICR    *((volatile u8*)0x5B)
#define  GIFR    *((volatile u8*)0x5A)


/********************MCUCR bits************/

/*
*Interrupt Sense Control 1 to determine when INT1 accur according to input in this bit 
*/
#define ISC11     3
#define ISC10     2

/*
*Interrupt Sense Control 0 to determine when INT0 accur according to input in this bit 
*/
#define ISC01     1
#define ISC00     0


/*********************MCUCSR bits*********************/

/*
*Interrupt Sense Control 0 to determine when INT0 accur according to input in this bit 
*/
#define ISC2      6  

/*********************GICR bits**************/

/*
External Interrupt Request  Enable
*/
#define INT0      6
#define INT1      7
#define INT2      5
   

/*********************GIFR bits**************/

/*
External Interrupt Flag 
*/

#define INTF0     6
#define INTF1     7
#define INTF2     5

#endif