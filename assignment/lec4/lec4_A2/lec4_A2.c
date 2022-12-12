/*
written by :Eman Elsayed
lec4_A2
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>
#include "file2.h"
void operation(void);
void main(void)  // entry point
{
	 operation();
}
void operation(void)
{
	int id;
	printf("enter id of operation:"); fflush(stdout);
	scanf("%d",&id);
	switch(id)
	{
		case 1 :
		add();
		break;
		case 2 :
		sub();
		break;
		case 3 :
		mult();
		break;
		case 4 :
		div();
		break;
		case 5 :
		bitwise_and();
		break;
		case 6 :
		bitwise_or();
		break;
		case 7 :
		bitwise_not();
		break;
		case 8 :
		bitwise_xor();
		break;
		case 9 :
		reminder();
		break;
		case 10 :
		increament();
		break;
	}
}