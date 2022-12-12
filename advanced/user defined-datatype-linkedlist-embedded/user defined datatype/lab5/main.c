#include"STD_TYPES.h"
#include<stdio.h>
typedef struct student{
	u8 name[20];
	u8 age ;
	u8 grade;
}std;
void get_data(std *s);
void print_data(std *s);

void main(void)
{
	std s1[4];

	get_data(s1);
	
	
	print_data(s1);
	
}
void get_data(std *s)
{
	for (u8 i=0;i<=3;i++)
	{
		printf("enter name of student %d:",i+1);  fflush(stdout);
		scanf(" %[^\n]s",&s[i].name);
		printf("enter age of student %d:",i+1);  fflush(stdout);
		scanf("%d",&s[i].age);
		printf("enter grade of student %d:",i+1);  fflush(stdout);
		scanf("%d",&s[i].grade);
	}
}
void print_data(std *s)
{
	printf("------------------------------------\n");
	for (u8 i=0;i<=3;i++)
	{
		printf("name of student %d:%s\n",i+1,s[i].name);  fflush(stdout);
		printf("age of student %d:%d\n",i+1,s[i].age);  fflush(stdout);
		printf(" grade of student %d:%d\n",i+1,s[i].grade);  fflush(stdout);
	}
}
