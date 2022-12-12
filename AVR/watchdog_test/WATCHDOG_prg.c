#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "WATCHDOG_int.h"
#include "WATCHDOG_reg.h"
#include "WATCHDOG_pri.h"
#include "WATCHDOG_cfg.h"



void M_WATCHDOG_Vid_Init(void)
{
	SET_BIT(WDTCR,WDE);
}
void M_WATCHDOG_Vid_Disable(void)
{
	WDTCR=(1<<WDE) | (1<<WDTOE);
	WDTCR=0;
}
void M_WATCHDOG_Vid_Sleep(void)
{
	WDTCR=((WDTCR & 0b11111000)| Watchdog_Timer_Prescale_Select);
}
