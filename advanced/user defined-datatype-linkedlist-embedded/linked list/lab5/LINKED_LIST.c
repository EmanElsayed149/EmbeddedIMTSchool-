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
void print_middle()
{
	u8 middle ;
	node *last=head;
	if(length%2==1)
	{
		middle=length/2;
		for(u8 i=0;i<length;i++)
		{
			if(i==middle)
			{
				printf("middle node:%d\n",last->data);
			}else{
				last=last->next;
			}
		}
	}else{
		middle=length/2;
		for(u8 i=0;i<length;i++)
		{
			if((i==middle)||(i==middle-1))
			{
				printf("middle node:%d\n",last->data);
				last=last->next;
			}else{
				last=last->next;
			}
		}
		
	}
}
void print_node_fromend(u8 position)
{
	node *last=head;
	if(length>=position)
	{
		for(u8 i=0;i<length;i++)
		{
			if(i==length-position)
			{
				printf("node from end:%d\n",last->data);
			}else{
				last=last->next;
			}
			
		}
	}else{
		printf("node from end:%d\n",head->data);
	}
}
void print_sumnodes()
{
	u32 sum=0;
	node *last=head;
	while(last->next!=NULL)
	{
		sum+=last->data;
		last=last->next;
	}
	sum+=last->data;
	printf("summation of nodes :%d\n",sum);
	
}
void max_node()
{
	node *last=head;
	u8 max=last->data;
	while(last->next!=NULL)
	{
		if(last->data >=max)
		{
			max=last->data;
		}
		last=last->next;
	}
	printf("maximum node :%d\n",max);
	
}
	
	


