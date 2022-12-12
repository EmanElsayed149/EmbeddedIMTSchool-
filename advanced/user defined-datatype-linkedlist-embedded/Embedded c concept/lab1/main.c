#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <stdio.h>

void main(void)
{
	u8 num=70;                  /*  70=0b01000110  */
	SET_BIT(num,0);             /*  71=0b01000111  */          
	printf("num=%d\n\n",num);
	printf("bit no 6 =%d",GIT_BIT(num,6));
}