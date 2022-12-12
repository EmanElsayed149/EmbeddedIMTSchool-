/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int num1,num2;
	printf("enter first number:");  fflush(stdout);
	scanf("%d",&num1);
	printf("enter second number:");  fflush(stdout);
	scanf("%d",&num2);
	if (num1==num2)
	{
		printf("%d=%d",num1,num2);
	}else if(num1<num2)
	{
		printf("%d>%d",num2,num1);
	}else{
		printf("%d>%d",num1,num2);
	}
}
