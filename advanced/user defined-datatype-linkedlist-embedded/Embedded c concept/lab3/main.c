#include "STD_TYPES.h"
#include <stdio.h>

#define GIT_BIT(REG)  ((REG>>3) &1)
void main(void)
{
	u8 num=23;                  /*  23=0b01010111  */
	printf("4th bit=%d",GIT_BIT(num));
}