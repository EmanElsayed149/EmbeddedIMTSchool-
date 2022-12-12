#include<stdio.h>
#include<stdlib.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include"LINKED_LIST.h"

extern node *head;
u8 length=0;
void print_node(void)
{   u8 i=0;
    printf("nodes :***************\n");
	if (length==0)
	{
		printf("list is empty\n");
		
	}else{
		node *last=head;
		while(last->next!=NULL)
		{
			
			printf("value of number %i:%i\n",i,last->data);
			last=last->next;
			i++;
		}
		printf("value of number %i:%i\n",i,last->data);
	}
	printf("___________________\n");
	
}
void add_node(u8 value )
{
	
	if (length==0)
	{
		node *new = (node*) malloc(sizeof(node));
		head = new ;
		head->data=value;
		head->next=NULL;
	}else
	{
		node *new=(node *)malloc(sizeof(node));
		node *last ;
		new->data=value;
		new->next=NULL;
		last=head;
		while(last->next!=NULL)
		{
			last=last->next;
		}
		last->next=new;
	}
	length++;
	
}
void delet_node(u8 value)
{
	
	node *first=head;
	
	node *last=first->next;
	
	if(head->data==value)
	{
		node *temp=head->next;
		free(head);
		head=temp;
		length--;
	}else 
	{
		while(last->next!=NULL)
		{
			if (last->data==value)
			{
				first->next=last->next;
				free(last);
				last = first->next;
				length--;
				printf("heeeeeeeeeeeeeeeeeeeeeeeeeeeee\n");
			}
			else
			{
				first=first->next;
				last=last->next;
			}
			
		}
		 if(last->data==value)
		{
			first->next=NULL;
			free(last);
		}
	}
   
	
	
}
void insert_node(u8 value,u8 position)
{
	node *new = (node*) malloc(sizeof(node));
	node *last=head;
	if(position==0)
	{
		printf("tttttttttttttttttttttttttttttttttt\n");
		new->data=value;
		new->next=head;
		head=new;
		length++;
	}else if(position ==length)
	{
		add_node(value);
	}
	else
	{
		for(u8 i=1;(i<=position)&&(i<length);i++)
		{
			if(i==position)
			{
				new->data=value;
				new->next=last->next;
				last->next=new;
				length++;
			}else
			{
				last=last->next;
			}
		}
	}
}
	
	


