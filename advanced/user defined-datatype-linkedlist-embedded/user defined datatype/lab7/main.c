#include<stdio.h>
#include"STD_TYPES.h"
typedef enum {
	level_1=1,
	level_2,
	level_3
}fan_level;

void main(void)
{
	printf("level1:%d\n",level_1);
	printf("level2:%d\n",level_2);
	printf("level3:%d\n",level_3);
}