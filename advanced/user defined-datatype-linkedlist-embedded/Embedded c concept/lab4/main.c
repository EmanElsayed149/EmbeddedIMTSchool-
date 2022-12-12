#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <stdio.h>
void fallingedge_counter (u8 *counter,u8 *new_read,u8 *old_read);
void main(void)
{
	u8 counter=0;
	u8 old_read;
	u8 new_read='0';
	printf("enter value (0/1) if you want to out enter (2)\n"); fflush(stdout);
	do
	{
		old_read=new_read;	
		scanf(" %c",&new_read); 	//fflush(stdout);
		fallingedge_counter (&counter,&new_read,&old_read);
	}while(new_read!='2');
	printf("number of falling edge: %d\n\n",counter);
	
	
}
void fallingedge_counter (u8 *counter,u8 *new_read,u8 *old_read)
{
	printf("last read of this bit is : %d\n",*old_read);
	if((*old_read=='1')&&(*new_read=='0'))
	{
		*counter=*counter+1;
	}
}