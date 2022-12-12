/*written by :eman elsayed*/
#include<stdio.h>
#include<stdlib.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include"LINKED_LIST.h"

/*data patient*/
u8 name[15],gender,age;
u32 id;


/*admin mode function */
void admin_mode()
{
	u32 defalt_pass=1234; /*defult password*/
	u32 passward;         /*password entered from admin*/
	u8 tries=0;           /*times available to enter incorrect pass*/
	u8 feature;           
	printf("please enter passward :");  fflush(stdout);
	scanf("%d",&passward);
	do
	{
		if(passward==defalt_pass)
		{
			printf("please choose feature you want :\n");
			printf("1-to add new patient\n2-edit patient record\n3-reserve a slot with doctor\n4-cancel reservation\n");  fflush(stdout);
			scanf("%d",&feature);
			switch(feature)
			{
				
				case 1:
				printf("------------enter information about patient ----------:\n");
				printf("name patient:");  fflush(stdout); 
				scanf(" %[^\n]s",name);
				printf("Age patient:"); fflush(stdout); 
				scanf("%d",&age);
				printf("gender patient:"); fflush(stdout); 
				scanf(" %c",&gender);
				printf("ID patient:"); fflush(stdout); 
				scanf("%d",&id);
				add_patient(name,gender,age, id); 
				break;
				case 2:
                printf("please enter id of patient: "); fflush(stdout);
                scanf("%d",&id);
				printf("enter new information:\n"); fflush(stdout);
				printf("name patient:");            fflush(stdout); 
				scanf(" %[^\n]s",name);
				printf("Age patient:"); fflush(stdout); 
				scanf("%d",&age);
				printf("gender patient:"); fflush(stdout); 
				scanf(" %c",&gender);
				edit_patient(name,gender,age,id);
				break;
				case 3:
				reserve_slot ();
				break;
				case 4:
				cancle_reserve();
				break;
				default:
				printf("this option is not available\n");
				break;
	        }
			break;
		}
		else
		{
			tries++;
			printf("wrong passward ! try again:");  fflush(stdout);
			scanf("%d",&passward);
		}
	}while(tries<3);
	if(tries==3)
	printf("you failed !\n");
}
/*user mode function*/
void user_mode(void)
{
	u32 id;
	u8 feature;
	printf("please choose feature you want :\n");
	printf("1-to print information about  patient\n2-print reservation\n");  fflush(stdout);
	scanf("%d",&feature);
	switch(feature)
	{
		case 1:
		printf("ID patient:"); fflush(stdout); 
	    scanf("%d",&id);
		printf("---------patient information--------\n");
		print_Patient(id);
		break;
		case 2:
		busy_slot();
		break;
		default:
	    printf("this option is not available\n");
		break;
	}
	
}