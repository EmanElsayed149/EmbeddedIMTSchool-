/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	float r,circ,area;
	printf("enter radious of circle:"); fflush(stdout);
	scanf("%f",&r);
	circ=2*3.14*r;
	area=3.14*r*r;
	printf("circumferens=%f\narea=%f",circ,area);
}