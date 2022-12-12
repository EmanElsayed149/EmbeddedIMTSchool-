/*
written by :Eman Elsayed
Lec1_A3
*/

/*stdio.h is liberary containing printf*/
#include <stdio.h>
void main (void)      //entry point
{
	int num1;
	int num2;
	int result;
	printf("please enter number1: ");     fflush(stdout);
	scanf("%d",&num1);
	printf("\nplease enter number2: ");   fflush(stdout);
	scanf("%d",&num2);
	result=num1+num2;
	printf("num1 + num2 = %d\n",result);      fflush(stdout);
	result=num1-num2;
	printf("num1 - num2 = %d\n",result);      fflush(stdout);
	result=num1&num2;
	printf("num1 & num2 = %d\n",result);      fflush(stdout);
	result=num1|num2;
	printf("num1 | num2 = %d\n",result);
	result=num1^num2;
	printf("num1 ^ num2 = %d\n",result);
}