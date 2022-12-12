/*
written by :Eman Elsayed
advanced
*/

/*stdio.h is liberary containing printf*/
#include <stdio.h>
void main(void)
{
	int h;
	printf("enter hight:");  fflush(stdout);
	scanf("%d",&h);
	for (int i=0;i<h;i++)
	{
		for(int j=0;j<=2*(i-1);j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j=0;j<=2*(h-2*i-1);j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	
}