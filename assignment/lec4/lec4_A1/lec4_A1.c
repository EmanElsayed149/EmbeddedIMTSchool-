/*
written by :Eman Elsayed
Lec4_A1
*/

/*stdio.h is liberary containing printf*/
#include <stdio.h>
int num1,num2,num3,num4;
void max(int num1,int num2,int num3,int num4);
void min(int num1,int num2,int num3,int num4);
void get_numbers(void);
void main(void)
{
	get_numbers();
	max(num1,num2,num3,num4);
	printf("\n");
	min(num1,num2,num3,num4);
	
}

void get_numbers(void)
{
	printf("enter num1:");  fflush(stdout);
	scanf("%d",&num1);
	printf("enter num2:");  fflush(stdout);
	scanf("%d",&num2);
	printf("enter num3:");  fflush(stdout);
	scanf("%d",&num3);
	printf("enter num4:");  fflush(stdout);
	scanf("%d",&num4);
}