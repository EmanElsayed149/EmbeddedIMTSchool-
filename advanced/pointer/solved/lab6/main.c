/*
written by :Eman Elsayed
26/8/2001
pionters

*/


#include <stdio.h>
void main(void)
{
	
	int arr[5]={11,99,88,90,22};
	int max=*arr;
	for(int i=0;i<5;i++)
	{
		printf("%d\t",*(arr+i));
		if(*(arr+i)>max)
		{
			max=*(arr+i);
		}
	}
	printf("\nmax:%d",max);
}