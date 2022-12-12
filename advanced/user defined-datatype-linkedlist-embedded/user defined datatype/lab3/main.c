/*
written by :Eman Elsayed

*/
#include"STD_TYPES.h"
#include<stdio.h>

typedef struct num{
	u8 real;
	u8 imagin;
}complex;
void add(complex *num1,complex *num2,u8 *real,u8 *imagin);
void main(void)
{
	u8 real_sum;
	u8 imagin_sum;
	complex num1;
	printf("enter real part of number1:");   fflush(stdout);
	scanf("%d",&num1.real);
	printf("enter imagin part of number1:");   fflush(stdout);
	scanf("%d",&num1.imagin);
	complex num2;
	printf("enter real part of number2:");   fflush(stdout);
	scanf("%d",&num2.real);
	printf("enter imagin part of number2:");   fflush(stdout);
	scanf("%d",&num2.imagin);
	add(&num1,&num2,&real_sum,&imagin_sum);
	printf("%d + %d i",real_sum,imagin_sum);
}
void add(complex *num1,complex *num2,u8 *real,u8 *imagin)
{
	*real=num1->real+num2->real;
	*imagin=num1->imagin+num2->imagin;
}