/*
written by :Eman Elsayed
Lec3_A2
*/

#include <stdio.h>

/*stdio.h is liberary containing printf*/


void main (void)      //entry point
{
	int id,pass;
	int wrong_answer=0;
	printf("please enter id:");  fflush(stdout);
	scanf("%d",&id);
	switch(id)
	{
		case 1234 :
		printf("enter password:");  fflush(stdout);
		scanf("%d",&pass);
		while(wrong_answer!=2)
		{
			if(pass==7788)
			{
				printf("welcome ahmed!");
				break;
			}
			else
			{
				wrong_answer+=1;
				printf("try again:");  fflush(stdout);
				scanf("%d",&pass);
			}
		}
		
		break;
		case 5678 :
		printf("enter password:");  fflush(stdout);
		scanf("%d",&pass);
		while(wrong_answer!=2)
		{
			if(pass==5566)
		    {
				printf("welcome Amr!");
			    break;
			}
			else
			{
				wrong_answer+=1;
				printf("try again:");   fflush(stdout);
				scanf("%d",&pass);
			}
		}
		break;
		case 9870 :
		printf("enter password:");  fflush(stdout);
		scanf("%d",&pass);
		while(wrong_answer!=2)
		{
			if(pass==1122)
		    {
				printf("welcome Wael!");
			    break;
			}
			else
			{
				wrong_answer+=1;
				printf("try again:");   fflush(stdout);
				scanf("%d",&pass);
			}
		}
		break;
		default:
		printf("you aren't registered");
		
	}
	if(wrong_answer==2)
	{
		printf("incorrect password for three times,no more tries");
	}
}