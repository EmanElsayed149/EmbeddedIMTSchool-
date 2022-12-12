/*
written by :Eman Elsayed
26/8/2001
pionters

*/

#include <stdio.h>
void swap(int *ptr1,int *ptr2);
void main(void)
{
	int i=0;
	char *ptr="bat";
	char str[4];
	while(ptr[i]!='\0')
	{
		i++;
	}
	str[0]=ptr[i-1];
	str[1]=' ';
	str[2]=ptr[i-2];
	printf(" %s",str);
}