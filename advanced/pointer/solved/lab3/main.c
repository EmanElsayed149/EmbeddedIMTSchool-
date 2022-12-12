/*
written by :Eman Elsayed
26/8/2001
pionters

*/


#include <stdio.h>
void main(void)
{
	
	char arr[10]={1,2,3,22,11,34,8,90,19,20};
	char *ptr=arr;
	for(int i=0;i<10;i++)
	{
		printf("%d\n",ptr[9-i]);
	}
}