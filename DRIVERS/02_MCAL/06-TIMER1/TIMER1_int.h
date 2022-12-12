#ifndef _TIMER1_INT_H
#define _TIMER1_INT_H


/********PRObability of arguments *************/

#define RISING_EDGE  1
#define FALLING_EDGE 0

void M_TIMER1_Vid_Init();
void M_TIMER1_Vid_SetDuty(u16 Copy_u16_Dutycycle);

void M_TIMER1_Vid_ICUInit(void);
void M_TIMER1_Vid_ICUResetTimer(void);
u16 M_TIMER1_U16_ICUGetValue(void);
void M_TIMER1_Vid_ICUSetEdge(u8 Copy_u8_set_edge);

#endif
