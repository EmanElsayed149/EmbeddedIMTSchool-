#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct nodes
{
	u8 data;
	struct nodes *next;
}node;

void add_node(u8 value);
void print_node(void);
void delet_node(u8 value);
void insert_node(u8 value,u8 position);
void print_middle();

#endif 