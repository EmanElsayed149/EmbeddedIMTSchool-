/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>
void add(void)
{
	int num1,num2,result;
	char operator;
	printf("enter operation to calculate:"); fflush(stdout);
	scanf("%d %c %d",&num1,&operator,&num2);
	result=num1+num2;
	printf("%d %c %d =%d",num1,operator,num2,result);
}
void sub(void)
{
	int num1,num2,result;
	char operator;
	printf("enter operation to calculate:"); fflush(stdout);
	scanf("%d %c %d",&num1,&operator,&num2);
	result=num1-num2;
	printf("%d %c %d =%d",num1,operator,num2,result);
}
void mult(void)
{
	int num1,num2,result;
	char operator;
	printf("enter operation to calculate:"); fflush(stdout);
	scanf("%d %c %d",&num1,&operator,&num2);
	result=num1*num2;
	printf("%d %c %d =%d",num1,operator,num2,result);
}
void reminder(void)
{
	int num1,num2,result;
	char operator;
	printf("enter operation to calculate:"); fflush(stdout);
	scanf("%d %c %d",&num1,&operator,&num2);
	result=num1%num2;
	printf("%d %c %d =%d",num1,operator,num2,result);
}
void div(void)
{
	
	float num1,num2,result;
	char operator;
	printf("enter operation to calculate:"); fflush(stdout);
	scanf("%f %c %f",&num1,&operator,&num2);
	if(num2!=0)
	{
	   result=num1/num2;
	   printf("%d %c %d =%f",num1,operator,num2,result);
	}else{
		printf("can't divide to 0");
	}
	
}
void bitwise_and(void)
{
	int num1,num2,result;
	char operator;
	printf("enter operation to calculate:"); fflush(stdout);
	scanf("%d %c %d",&num1,&operator,&num2);
	result=num1&num2;
	printf("%d %c %d =%d",num1,operator,num2,result);
}
void bitwise_or(void)
{
	int num1,num2,result;
	char operator;
	printf("enter operation to calculate:"); fflush(stdout);
	scanf("%d %c %d",&num1,&operator,&num2);
	result=num1|num2;
	printf("%d %c %d =%d",num1,operator,num2,result);
}
void bitwise_xor(void)
{
	int num1,num2,result;
	char operator;
	printf("enter operation to calculate:"); fflush(stdout);
	scanf("%d %c %d",&num1,&operator,&num2);
	result=num1^num2;
	printf("%d %c %d =%d",num1,operator,num2,result);
}
void bitwise_not(void)
{
	int num1,result;
	char operator;
	printf("enter operation to calculate:"); fflush(stdout);
	scanf("%d %c",&num1,&operator);
	result=~num1;
	printf("%d %c =%d",num1,operator,result);
}
void increament(void)
{
	int num1,result;
	char operator;
	printf("enter value to increament:"); fflush(stdout);
	scanf("%d ",&num1);
	result=++num1;
	printf("%d ++ =%d",--num1,result);
}



