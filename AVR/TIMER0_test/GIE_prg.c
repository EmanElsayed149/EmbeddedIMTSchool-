/*
*Name     :Eman Elsayed
*Layer    :MCAL
*version  :V1.0 - 01/OCT/2021
*/

/*file inclusion */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GIE_reg.h"
#include "GIE_int.h"


/*
*public functions defintions
*/

void M_GIE_Vid_EnableGlbInt()
{
	SET_BIT(SREG,7);
}
void M_GIE_Vid_DisableGlbInt()
{
	CLR_BIT(SREG,7);
}
