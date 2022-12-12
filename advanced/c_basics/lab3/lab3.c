/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	float temp;
	printf("enter temperature in celsious:"); fflush(stdout);
	scanf("%f",&temp);
	temp=(temp*9/5)+32;
	printf("temperature in fahrenhiet :%f",temp);
	

}