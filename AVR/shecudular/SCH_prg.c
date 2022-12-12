/*
 * SCH_prg.c
 *
 *  Created on: Dec 10, 2021
 *      Author: Dell
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_int.h"
#include "TIMER_int.h"


/****number of tasks*****/
#define num_task  3

/******information to each task********/
typedef struct{
	u16 periodicity;
	void (*task_fuc)(void);
}task_t;

/***create array of task and asign info****/
task_t sys_task[num_task];

void schedular(void)
{
	static volatile u16 Local_U16_counter=0;
	Local_U16_counter++;
	if(Local_U16_counter==3000)
	{
		Local_U16_counter=0;
	}
	for(u8 i=0;i<num_task;i++)
	{
		if(sys_task[i].periodicity % Local_U16_counter == 0)
		{
			sys_task[i].task_fuc();
		}
	}


}
void SCH_Vid_Start(void)
{
	M_TIMER_Init(OVERFLOW_Mode,Prescalar_8,24);
	CALL_BACK(schedular);
}
void SCH_Vid_creatTask(u8 Copy_u8_priorty ,u16 Copy_U16_periodicity,void(*ptr_task_func)(void))
{
	sys_task[Copy_u8_priorty].periodicity=Copy_U16_periodicity;
	sys_task[Copy_u8_priorty].task_fuc=ptr_task_func;
}
