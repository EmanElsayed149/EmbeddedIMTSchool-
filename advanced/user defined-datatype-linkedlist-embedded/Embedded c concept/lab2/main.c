#include "STD_TYPES.h"
#include <stdio.h>

#define sum_arr(arr,sum)  for(u8 i=0;i<5;i++) \
                           {               \
						     sum+=*(arr+i);    \
                           }
void main (void)
{
	u8 arr[5]={1,9,2,8,5};
	u8 sum=0;
	sum_arr(arr,sum)
	printf("sum=%d",sum);
	
}