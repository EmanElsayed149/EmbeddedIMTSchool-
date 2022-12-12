/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int num;
	printf("enter number :"); fflush(stdout);
	scanf("%d",&num);
	while((num/10)!=0)
	{
		printf("%d",num%10);  fflush(stdout); 
		num/=10;
	}
}
	