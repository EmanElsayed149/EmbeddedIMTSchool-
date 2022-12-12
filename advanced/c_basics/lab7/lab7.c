/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int num1,num2,min,num3;
	printf("enter first number:");  fflush(stdout);
	scanf("%d",&num1);
	min=num1;
	printf("enter second number:");  fflush(stdout);
	scanf("%d",&num2);
	if (num2<min)
	{
		min=num2;	
	}
	printf("enter third number:");  fflush(stdout);
	scanf("%d",&num1);
	if (num1<min)
	{
		min=num1;	
	}
	printf("min=%d",min);
	
}