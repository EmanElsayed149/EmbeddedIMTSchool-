/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int num,power,result=1;
	printf("enter number :"); fflush(stdout);
	scanf("%d",&num);
	printf("enter power :"); fflush(stdout);
	scanf("%d",&power);
	for(int i=1;i<=power;i++)
	{
		result*=num;
	}
	printf("reslt=%d",result);
	
}