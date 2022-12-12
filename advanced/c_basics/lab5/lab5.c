/*
written by :Eman Elsayed
advanced 1
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h>

void main(void)  // entry point
{
	char x;
	int arr[8];
	int binary,counter=0,ascii;
	printf("enter any chatacter:");  fflush(stdout);
	scanf("%c",&x);
	ascii=(int)x ;
	printf("ascii value for %c is :%d\n",x,x);
	/**************************/
	/* to print binary for number*/
	do
	{
		binary=ascii%2;
		ascii/=2;
		counter++;
		arr[counter]=binary;
		

	}
	while(counter <8);
	for (int i=0;i<8;i++)
    {

        printf("%d",arr[8-i]);
    }
}