/*
written by :Eman Elsayed
26/8/2020
pionters

*/

#include <stdio.h>
#include"STD_TYPES.h"
void main(void)
{
	u32 num=125;
	num=(num>>16)|(num<<16);
	printf("num=%d",num);
}