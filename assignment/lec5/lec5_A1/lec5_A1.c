/*
written by :Eman Elsayed
lec5_A1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

int arr[10],max=0,min=0;
void maxmin(int arr[]);
void main(void)
{
	
	for (int i=0;i<10;i++)
	{
		printf("Enter number%d:",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	maxmin(arr);
	printf("max value=%d\n",max);	
	printf("min value=%d\n",min);
}
void maxmin(int arr[])
{
	for(int i=0;i<9;i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}else{
			min=arr[i];
		}
	}
}
