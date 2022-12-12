/*
written by :Eman Elsayed

*/
#include"STD_TYPES.h"
#include<stdio.h>
typedef struct dis{
	f32 inch;
	f32 feet;
}distance;

void main(void)
{
	distance d1;
	d1.inch=9;
	d1.feet =d1.inch*5;
	printf("%f",d1.feet);
}