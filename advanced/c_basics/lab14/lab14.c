/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	char x='A';
	while(x<='Z')
	{
		printf("%c\t ",x);
		x+=1;
	}
}