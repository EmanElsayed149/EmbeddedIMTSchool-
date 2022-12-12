/*
written by :Eman Elsayed
Lec2_assignment 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
	int num;
	int flag=0;
	printf("Enter number 1:");  fflush(stdout);
	scanf("%d",&x1);
	printf("Enter number 2:");  fflush(stdout);
	scanf("%d",&x2);
	printf("Enter number 3:");  fflush(stdout);
	scanf("%d",&x3);
	printf("Enter number 4:");  fflush(stdout);
	scanf("%d",&x4);
	printf("Enter number 5:");  fflush(stdout);
	scanf("%d",&x5);
	printf("Enter number 6:");  fflush(stdout);
	scanf("%d",&x6);
	printf("Enter number 7:");  fflush(stdout);
	scanf("%d",&x7);
	printf("Enter number 8:");  fflush(stdout);
	scanf("%d",&x8);
	printf("Enter number 9:");  fflush(stdout);
	scanf("%d",&x9);
	printf("Enter number 10:");  fflush(stdout);
	scanf("%d",&x10);
	printf("Enter value to search :");  fflush(stdout);
	scanf("%d",&num);
	if (num==x1)
	{
		printf("num exist at element 1\n");
		flag=1;
	}
	if (num==x2)
	{
		printf("num exist at element 2\n");
		flag=1;
	}
	if (num==x3)
	{
		printf("num exist at element 3\n");
		flag=1;
	}
	if (num==x4)
	{
		printf("num exist at element 4\n");
		flag=1;
	}
	if (num==x5)
	{
		printf("num exist at element 5\n");
		flag=1;
	}
	if (num==x6)
	{
		printf("num exist at element 6\n");
		flag=1;
	}
	if (num==x7)
	{
		printf("num exist at element 7\n");
		flag=1;
	}
	if (num==x8)
	{
		printf("num exist at element 8\n");
		flag=1;
	}
	if (num==x9)
	{
		printf("num exist at element 9\n");
		flag=1;
	}
	if (num==x10)
	{
		printf("num exist at element 10\n");
		flag=1;
	}
	if(flag==0)
	{
		printf("this number not exist");
	}
}