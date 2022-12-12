/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>
#include <math.h>

void main(void)  // entry point
{
	int num,squ;
	printf("enter positive number :"); fflush(stdout);
	scanf("%d",&num);
	squ=sqrt(num);
	if((num-squ*squ)==0)
	{
		printf("%d is perfect square",num);
	}else
	{
		printf("%d is not perfect square",num);
	}
}