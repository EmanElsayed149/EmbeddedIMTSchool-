/*written by :eman elsayed*/

/*gard file*/
#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_
/*struct for information about patient */
typedef struct p{
	u8 gender;
	u8 age;
	u32 id;
	u8 name[15];
	struct p *next;
}patient;

/*struct for slots*/

typedef struct 
{
	u32 id;
	f32 time;
	u8 state;
}slot;

/*states of slots */
#define reserved   1
#define unreserved 0

/*function admin mode*/
/*to add new patient */
void add_patient(u8 *name,u8 gender,u8 age,u32 id);
/*print patient record*/
void print_Patient(u32 id);
/*to edit information about patient*/
void edit_patient(u8 *name,u8 gender,u8 age,u32 id);
/*to reserve a slot with doctor*/
void reserve_slot ();
/*delet reserve*/
void cancle_reserve();
void busy_slot();
#endif


