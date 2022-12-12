/*
*Name     :Eman Elsayed
*Layer    :Liberary
*version  :V1.0 - 01/OCT/2021
*/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define   SET_BIT(REG,BIT)     		( REG |=  (1<<BIT))
#define   CLR_BIT(REG,BIT)   		( REG &= ~(1<<BIT))
#define   TOG_BIT(REG,BIT)  		( REG ^=  (1<<BIT))
#define   CLR_REG(REG)       		( REG &= ~(255<<0))
#define   SET_REG(REG)         		( REG |=  (255<<0))
#define   IS_SET(REG,BIT)      		( REG &(1<<BIT))
#define   GIT_BIT(REG,BIT)     		( (REG>>BIT) &1)
#define   WRT_BIT(REG,BIT,VALUE)    ( REG=((REG & (~(1<<BIT)))|(VALUE<<BIT)))
/*to write on bit     1-first clear bit   2-ORing Bit with value  */

#endif /* BIT_MATH_H_ */