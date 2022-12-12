/*written by :eman elsayed*/
#include<stdio.h>
#include<stdlib.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include"LINKED_LIST.h"
#include "clinic.h"
patient *head;
void main(void)
{
	u8 mode;
    printf("__WELCOME AT CLINIC MANAGEMENT___\n");
	do
	{
		printf("1-for admin mode\n2-for user mode\n3-for exit from programm\nplease enter mode you want:\n"); 
		fflush(stdout);
	    scanf("%d",&mode);
	    if (mode==1)
	    {
	    	printf("____WELCOME AT ADMIN MODE___\n\n\n");
	    	admin_mode();
	    }if(mode==2)
	    {
	    	printf("____WELCOME AT user MODE___\n\n\n");
	    	user_mode();
	    }
	}while(mode!=3);
	
	
}