/*
written by :Eman Elsayed
26/8/2001
pionters

*/

#include <stdio.h>
void swap(int **ptr1,int **ptr2);
void main(void)
{
	int x=9,y=10;
	int *ptr1=&x;
	int *ptr2=&y;
	swap(&ptr1,&ptr2);
	printf("%d %d",*ptr1,*ptr2);
}
void swap(int **ptr1,int **ptr2)
{
	int *temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}