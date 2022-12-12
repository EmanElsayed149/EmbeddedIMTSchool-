/*
 * SCH_int.h
 *
 *  Created on: Dec 10, 2021
 *      Author: Dell
 */

#ifndef SCH_INT_H_
#define SCH_INT_H_

void SCH_Vid_Start(void);
void SCH_Vid_creatTask(u8 Copy_u8_priorty ,u16 Copy_U16_periodicity,void(*ptr_task_func)(void));
/*func which is executed evey 1 ms*/
void schedular(void);

#endif /* SCH_INT_H_ */
