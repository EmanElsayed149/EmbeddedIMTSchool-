#include<stdio.h>
#include<stdlib.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include"LINKED_LIST.h"

node *head;
void main (void)
{
	u8 position;
	u8 state,data=0;
	do
	{
		
		printf("to add node enter 0\nto print nodes enter 1\nto delete node enter 2\nto add node in position  enter 3\nto exit enter 4:");  fflush(stdout);
		scanf("%u",&state);
		switch(state)
		{
			case 0:
			printf("adding  node:____________\n");
			printf("enter node:");  fflush(stdout);
			scanf("%u",&data);
			add_node(data);
			printf("_____________\n");
			break;
			case 1:
			print_node();
			break;
			case 2:
			printf("deleting node___________\n");
			printf("enter node you want to delet it :\n");  fflush(stdout);
			scanf("%u",&data);
			printf("______________\n");		
			delet_node(data);
			break;
			case 3:
			printf("______________\n\n");	
			printf("enter data to insert it:");  fflush(stdout);
			scanf("%u",&data);
			printf("enter which position you want:");  fflush(stdout);
			scanf("%u",&position);
			insert_node(data,position);
			printf("______________\n\n");
			break;
			
			default:
			printf("unvailed\n");
		}
	}while(state!=4);
	 print_middle();
     print_node_fromend(4);
	 print_sumnodes();
	printf("thank youuuuuuuuuu\n");
}