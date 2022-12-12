#ifndef _WATCHDOG_REG_H
#define _WATCHDOG_REG_H


#define WDTCR *((volatile u8*)0x41)

#define  WDTOE 4
#define  WDE   3
#define  WDP2  2
#define  WDP1  1
#define  WDP0  0
 
#endif