/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int num1,num2,result;
	printf("enter first number:");  fflush(stdout);
	scanf("%d",&num1);
	printf("enter second number:");  fflush(stdout);
	scanf("%d",&num2);
	result=(num1+num2)*3-10;
	printf("(%d+%d)*3-10=%d",num1,num2,result);
}