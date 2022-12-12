/*
written by :Eman Elsayed
26/8/2001
pionters

*/

void smallest_ele(int *ptr);
#include <stdio.h>
void main(void)
{
	int arr[5]={2,33,22,34,50};
	smallest_ele(arr);
}
void smallest_ele(int *ptr)
{
	int min=ptr[0];
	for(int i=0;i<5;i++)
	{
		if(ptr[i]<min)
		{
			min=ptr[i];
			
		}
	}
	printf("min:%d",min);
}