/*
written by :Eman Elsayed
26/8/2001
pionters

*/

void copy(int *ptr1,int *ptr2);
#include <stdio.h>
void main(void)
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={0};
	copy(arr1,arr2);
	for(int i=0;i<5;i++)
		
	{
		printf("%d\t",arr2[i]);
	}
}
void copy(int *ptr1,int *ptr2)
{
	for(int i=0;i<5;i++)
		
	{
		ptr2[i]=ptr1[i];
	}
}