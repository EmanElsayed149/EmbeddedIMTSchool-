/*
written by :Eman Elsayed
lec5_lab1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>
void main(void)
{
	int arr[10],count=0,r[10],t=-1,num;
	for (int i=0;i<10;i++)
	{
		printf("Enter number%d:",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter number to search:");
	fflush(stdout);
	scanf("%d",&num);
	for (int i=0;i<10;i++)
	{
		if(arr[i]==num)	
		{
			count+=1;
		}
		else
		{
			t+=1;
			r[t]=count;
			count=0;
		}
	}
	for(int i=0;i<t;i++)
	{
		if (r[i]>r[i+1])
		{
			int temp=r[i];
			r[i]=r[i+1];
			r[i+1]=temp;
		}
	}
	printf("%d",r[t]);
}