/*
written by :Eman Elsayed

*/
#include"STD_TYPES.h"
#include<stdio.h>
typedef struct tan{
	u8 hours;
	u8 minutes;
	u8 seconds;
}time;

void time_difference(time *t1,time *t2,u8 *hours_dif,u8 *minutes_dif,u8 *seconds_dif );

void main(void)
{
	time t1;
	time t2;
	u8 hours_dif;
	u8 minutes_dif;
	u8 seconds_dif;
	
	t1.hours =9;
	t1.minutes =55;
	t1.seconds =50;
	t2.hours =4;
	t2.minutes =5;
	t2.seconds =40;
	time_difference(&t1,&t2,&hours_dif,&minutes_dif,&seconds_dif);
	printf("%d : %d :%d ",hours_dif,minutes_dif,seconds_dif);
	
}
void time_difference(time *t1,time *t2,u8 *hours_dif,u8 *minutes_dif,u8 *seconds_dif )
{
	*hours_dif=t1->hours-t2->hours;
	*minutes_dif=t1->minutes-t2->minutes;
	*seconds_dif=t1->seconds-t2->seconds;
}