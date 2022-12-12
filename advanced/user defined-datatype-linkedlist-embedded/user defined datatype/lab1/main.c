/*
written by :Eman Elsayed

*/
#include"STD_TYPES.h"
#include<stdio.h>

typedef struct stdio
{
	u8 name[20];
	u8 roll;
	u8 total_mark;
}students;
void main(void)
{
	students ahmed;
	/*scaninig data of student one*/
	printf("enter name of student:");   fflush(stdout);
	scanf(" %[^\n]s",&ahmed.name);
	printf("enter roll of student:");   fflush(stdout);
	scanf(" %d",&ahmed.roll);
	printf("enter total_mark of student:");   fflush(stdout);
	scanf(" %d",&ahmed.total_mark);
	/*printing data*/
	printf("name  of student is:");
	for(u8 i=0;ahmed.name[i]!='\0';i++)
	{
		printf("%c",ahmed.name[i]);  
	}
	printf("\nenter rollof student:%d\n",ahmed.roll);
	printf("enter total_mark of student:%d\n",ahmed.total_mark);
	
}
