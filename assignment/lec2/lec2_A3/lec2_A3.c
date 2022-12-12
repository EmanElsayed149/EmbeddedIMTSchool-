/*
written by :Eman Elsayed
Lec2_A3
*/

#include <stdio.h>

/*stdio.h is liberary containing printf*/


void main (void)      //entry point
{
	float max,num1,num2,num3;
	printf("enter number1:");  fflush(stdout);
	scanf("%f",&num1);
	max=num1;
	printf("enter number2:");   fflush(stdout);
	scanf("%f",&num2);
	printf("enter number3:");     fflush(stdout);
	scanf("%f",&num3);
	if(max<num2)
	{
		max=num2;
	}
	if (max<num3)
	{
		max=num3;
	}
	printf("max is:%f",max);
}