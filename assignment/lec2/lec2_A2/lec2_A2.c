/*
written by :Eman Elsayed
Lec2_assignment 2
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	int id , pass;
	printf("enter your id:");
	fflush(stdout);
	scanf("%d",&id);
	switch(id)
	{
		case 1234 :
		printf("enter password:");  fflush(stdout);
		scanf("%d",&pass);
		if(pass==000)
		{
			printf("user name:Eman Elsayed");
		}
		else
		{
			printf("incorrect password");
		}
		break;
		case 5678 :
		printf("enter password:"); fflush(stdout);
		scanf("%d",&pass);
		if(pass==111)
		{
			printf("user name:Ahmed");
		}
		else
		{
			printf("incorrect password");
		}
		break;
		default:
		printf("inncorect id");
		
	}
}