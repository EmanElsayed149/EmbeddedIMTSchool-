#include<stdio.h>
#include<stdlib.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include"LINKED_LIST.h"
#include<string.h>

extern patient *head; /*start of list of patient*/
u8 length=0;      /*number of patient*/


slot all_slot[5]={{0,2,0},{0,2.5,0},{0,3,0},{0,3.5,0},{0,4,0}};

/*print patient record*/
void print_Patient(u32 id)
{ 
    
	if(length==0)
	{
		
		printf("\nthere is no patient !\n");  fflush(stdout);
	}else
	{
		
		patient *last;
		last=head;
		
		while(last->next!=NULL)
		{
			if (last->id==id)
			{
				printf("-----------patient information:------------\n\n");
			    printf("patient name: %s\npatient id: %d\npatient age: %d\npatient gender:%c\n\n\n",last->name,last->id,last->age,last->gender);  
			}
			
			last=last->next;
		}
		if (last->id==id)
		{
			printf("----------patient information:------------\n");
		    printf("patient name: %s\npatient id: %d\npatient age: %d\npatient gender:%c\n\n",last->name,last->id,last->age,last->gender); 
		}
		   
	}
	
}
/*add new patient */
void add_patient(u8 *name,u8 gender,u8 age,u32 id)
{
	printf("----------------------\n\n"); 
	
	if (length==0)
	{
		patient *new=(patient *)malloc(sizeof(patient));
		head=new;
		head->gender=gender;
		head->age=age ;
		head->id =id  ;
		strcpy(head->name,name);
		
		head->next=NULL;
		
	}else
	{
		patient *new=(patient *)malloc(sizeof(patient));
		patient *last;
		new->gender=gender;
		new->age=age ;
		new->id =id  ;
		strcpy(new->name,name);
		new->next=NULL;
		last=head;
		//***********************
		while(last->next!=NULL)
		{
			if (last->id==id)
			{
				printf("this id is already exist ! please choose anthor id\n:"); fflush(stdout);
				scanf("%d",&id);
				last=head;
			}
			else{
				last=last->next;
			}
			
		}
		new->id =id  ;
		if (last->id==id)
		{
			printf("this id is already exist ! please choose anthor id\n:"); fflush(stdout);
			scanf("%d",&id);
			new->id =id  ;
		}
		//****************
		last=head;
		while(last->next!=NULL)
		{
			last=last->next;
		}
		last->next=new;
		
	}
	
	length++;
	
}
/*edit information about patient by id*/
void edit_patient(u8 *name,u8 gender,u8 age,u32 id)
{
	printf("\n----------------------------------\n\n");
	printf("______editing information using id ______\n");
	u8 flag=0;
	if(head->id==id)
	{
		flag=1;
		head->gender=gender;
		head->age=age ;
		head->id =id  ;
		strcpy(head->name,name);
	}else{
		patient *last=head;
		while(last->next!=NULL)
		{
			if(last->id==id)
			{
				flag=1;
				head->gender=gender;
		        head->age=age ;
		        head->id =id  ;
		        strcpy(head->name,name);
			}
		}
	}
	if(flag==0)
	{
		printf("this id is not correct!\n");
	}
}
/*reserve a slot*/
void reserve_slot ()
{
	u8 ok_nok;             /*to knowt if slot is ok or not for patient*/
	f32 time_slot ;       
	u32 id;
	printf("\n--------------available slot--------------\n");
	for(u8 i=0;i<5;i++)
	{
		if (all_slot[i].state==0)
		{
			printf(" %f : %f pm is available \n",all_slot[i].time,(all_slot[i].time) + 0.5);
		}
	}
	printf("if any time of this slots is ok(y/n)\n");  fflush(stdout);
	scanf(" %c",&ok_nok);
	if(ok_nok=='y')
	{
		printf("enter time you chose it to reserve it:");  fflush(stdout);
     	scanf("%f",&time_slot);
		printf("enter your id :");  fflush(stdout);
     	scanf("%d",&id);
		for(u8 i=0;i<5;i++)
		{
			if (all_slot[i].time==time_slot)
			{
				all_slot[i].id=id;
				all_slot[i].state=1;	
			}
		}
	}
	else
	{
		printf("sorry you can reserve slot in anthor day\n");
	}
	

}
/*delet reserve*/
void cancle_reserve()
{
	printf("\n-------------------------------\n");
	u32 id ;
	printf("enter id :"); fflush(stdout);
	scanf("%d",&id);
	for(u8 i=0;i<5;i++)
		{
			if(id==all_slot[i].id)
			{
				all_slot[i].state=0;
				break;
			}
		}
}
/*busy slot*/
void busy_slot()
{
	printf("\n------------reserved slot:-----------\n");
	for(u8 i=0;i<5;i++)
	{
		if (all_slot[i].state==1)
		{
			printf("%f : %f pm --------id of this reserve:%d\n",all_slot[i].time,all_slot[i].time+.5,all_slot[i].id);
		}	
	}
}
