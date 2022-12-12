/*
written by :Eman Elsayed
26/8/2001
pionters

*/


#include <stdio.h>
void main(void)
{
	char *name="emanelsayed";
	int length=0;
	while(name[length]!='\0')
	{
		printf("%c",name[length]);
		length++;
	}
	
	printf("\nlength of word:%d",length);   fflush(stdout);
}

