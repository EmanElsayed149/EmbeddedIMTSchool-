/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int id;
	printf("enter id of operation:"); fflush(stdout);
	scanf("%d",&id);
	switch(id)
	{
		case 1 :
		result=num1+num2;
		break;
		case 2 :
		result=num1-num2;
		break;
		case 3 :
		result=num1*num2;
		break;
		case 4 :
		result=num1/num2;
		break;
		case 5 :
		result=num1/num2;
		break;
		case 6 :
		result=num1/num2;
		break;
		case 7 :
		result=num1/num2;
		break;
		case 8 :
		result=num1/num2;
		break;
		case 9 :
		result=num1/num2;
		break;
		case 10 :
		result=num1/num2;
		break;
		case 11 :
		result=num1/num2;
		break;
	}
	printf("%d %c %d =%d",num1,operator,num2,result);
}
