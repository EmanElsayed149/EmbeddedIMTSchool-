/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int num,counter=0;
	printf("enter number :"); fflush(stdout);
	scanf("%d",&num);
	while((num/10)!=0)
	{
		num/=10;
		counter++;
	}
	printf("%d",counter+1);
}