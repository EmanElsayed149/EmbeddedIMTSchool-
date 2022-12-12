/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int grade;
	printf("enter your grade:");  fflush(stdout);
	scanf("%d",&grade);
	if(grade<50)
	{
		printf("failed");
	}
	else if (grade<65)
	{
		printf("normal");
	}
	else if (grade<75)
	{
		printf("good");
	}
	else if (grade<85)
	{
		printf("very good");
	}
	else
	{
		printf("exellent");
	}
}