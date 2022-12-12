/*
written by :Eman Elsayed
26/8/2001
pionters

*/


#include <stdio.h>
void swap(void);
void call_back(void(*func)(void));
int num1=9,num2=12;
int *ptr1=&num1;
int *ptr2=&num2;
void main(void)
{
	
	//swap(&num1,&num2);
	int temp=num1;
	num1=(num1&num2)|num2;
	num2=(temp&num2)|temp;
	
	printf("num1=%d\tnum2=%d\n\n",num1,num2);
	call_back(swap);
	printf("after swapping :\n");
	printf("num1=%d\tnum2=%d",num1,num2);
}
void swap()
{
	int temp=*ptr1;
	*ptr1=(*ptr1)&(*ptr2)|(*ptr2);
	*ptr2=(temp)&(*ptr2)|(temp);
}
void call_back(void(*func)(void)){
	func();
}