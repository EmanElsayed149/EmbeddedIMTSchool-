/*
written by :Eman Elsayed
Lec3_A3
*/

#include <stdio.h>

/*stdio.h is liberary containing printf*/


void main (void)      //entry point
{
	int hight;
	printf("enter hight:");  fflush(stdout);
	scanf("%d",&hight);
	for(int i=0; i<hight;i++)
	{
		for (int k=0;k<hight-i;k++)
		{
			printf("  ");
		}
		for(int j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}