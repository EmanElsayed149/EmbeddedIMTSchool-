#include<stdio.h>
#include"STD_TYPES.h"
#include"string.h"
typedef union family
{
	u8 first_name[30];
	u8 last_name[30];
}family_name;
void main(void)
{
	printf("size of family_name:%d\n",sizeof(family_name));
	family_name f1;
	printf("enter first name:");  fflush(stdout);
	scanf("%[^\n]s",&f1.first_name);
	printf("the last name is:");
	for(u8 i=0;f1.last_name[i]!='\0';i++)
	{
		printf("%c",f1.last_name[i]);
	}
}