/*stdio.h is liberary containing printf*/
#include <stdio.h>
void max(int num1,int num2,int num3,int num4)
{
	if ((num1>num2)&&(num1>num3)&&(num1>num4))
	{
		printf("max number :%d",num1);
	}else if((num2>num1)&&(num2>num3)&&(num2>num4))
	{
		printf("max number :%d",num2);
	}else if((num3>num1)&&(num3>num2)&&(num3>num4))
	{
		printf("max number :%d",num3);
	}
	else{
		printf("max number :%d",num4);
	}
}
void min(int num1,int num2,int num3,int num4)
{
	if ((num1<num2)&&(num1<num3)&&(num1<num4))
	{
		printf("min number :%d",num1);
	}else if((num2<num1)&&(num2<num3)&&(num2<num4))
	{
		printf("min number :%d",num2);
	}else if((num3<num1)&&(num3<num2)&&(num3<num4))
	{
		printf("min number :%d",num3);
	}
	else{
		printf("min number :%d",num4);
	}
}