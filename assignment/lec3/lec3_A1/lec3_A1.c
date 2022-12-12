/*
written by :Eman Elsayed
Lec3_assignment 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int num1,num2,sum;
	while(1)
	{
		printf("Enter number 1:"); fflush(stdout);
		scanf("%d",&num1);
		printf("Enter number 2:"); fflush(stdout);
		scanf("%d",&num2);
		sum=num1+num2 ;
		printf("summation=%d\n",sum);
	}
}