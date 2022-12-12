/*
written by :Eman Elsayed
26/8/2001
pionters

*/

#include <stdio.h>
void swap(int *ptr1,int *ptr2);
void main(void)
{
	int arr1[5]={9,8,7,6,11};
	int arr2[5]={11,22,33,4,5};
	swap(arr1,arr2);
	for(int i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",arr2[i]);
	}
}
void swap(int *ptr1,int *ptr2)
{
	int temp;
	for(int i=0;i<5;i++)
	{
		temp=*(ptr1+i);
		*(ptr1+i)=*(ptr2+i);
		*(ptr2+i)=temp;
	}
}