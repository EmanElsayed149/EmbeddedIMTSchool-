/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int num,flag=0;
	printf("enter number:");  fflush(stdout);
	scanf("%d",&num);
	for (int i=2;i<=num/2 ;i++)
	{
		if(num%i==0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("%d is prime number",num);
	}else{
		printf("%d is not prime number",num);
	}
}