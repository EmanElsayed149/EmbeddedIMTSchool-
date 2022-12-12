/*
written by :Eman Elsayed
Lec1_A2
*/

/*stdio.h is liberary containing printf*/
#include <stdio.h>
void main (void)      //entry point
{
	float num1;
	float num2;
	float num3;
	printf("please enter number1: ");    fflush(stdout);
	scanf("%f",&num1);
	printf("\nplease enter number2: ");  fflush(stdout);
	scanf("%f",&num2);
	printf("\nplease enter number3: ");  fflush(stdout);
	scanf("%f",&num3);
	printf("number3: %f\nnumber2: %f\nnumber1: %f\n",num3,num2,num1);
}