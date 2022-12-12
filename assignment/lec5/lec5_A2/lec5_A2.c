/*
written by :Eman Elsayed
Lec3_assignment3
*/

/*stdio.h is liberary containing printf and scanf*/
#include <stdio.h> 
 
void main(void)  // entry point
{
	int class1[10],class2[10],class3[10]; 
	int min=0,max=0,sum=0,passed,failed;
	
	/* loop to enter values in array*/
	for (int i=1;i<=3;i++)
	{
		printf("enter grades for class %d\n",i);
		for(int j=0;j<10;j++)
		{
			if (i==1)
			{
				
				printf("Enter grade for student %d:",j);
				/*fflush to print strings stored in buffer*/
				fflush(stdout);
				scanf("%d",& class1[j]);
			}
			else if (i==2)
			{
				
				printf("Enter grade for student %d:",j);
				/*fflush to print strings stored in buffer*/
				fflush(stdout);
				scanf("%d",& class2[j]);
			}
			else
			{
				printf("Enter grade for student %d:",j);
				fflush(stdout);
				scanf("%d",& class3[j]);
			}
			
		}
		
	}
	min=class1[0];
	max=class1[0];
	/* loop to get informbout each clssation a*/
	for ( int i =1 ; i <= 3 ; i++)
	{
		for (int j=0 ; j<10 ; j++)
		{
			if (i==1)
			{
				if (class1[j] > max)
					max = class1[j];
				else if (class1[j] < min)
					min=class1[j];
				
				if (class1[j] >= 50 )
					passed++;
				else
					failed++;
				sum+=class1[j];
			}
			
			if (i==2)
			{
				if (class2[j] > max)
					max=class2[j];
				else if (class2[j] < min)
					min=class2[j];
				
				if (class2[j] >= 50)
					passed++;
				else
					failed++;
				sum+=class2[j];
			}
			if (i==3)
			{
				if (class3[j] > max)
					max=class3[j];
				else if (class3[j] < min)
					min=class3[j];
				
				if (class3[j] >= 50)
					passed++;
				else
					failed++;
				sum+=class3[j];
			}
		}

	}
	printf("Number of passed students = %d \n",passed);
	printf("Number of failed students = %d \n",failed);
	printf("Highest grade = %d \n",max);
	printf("Lowest grade = %d \n",min);
	printf("Average grade = %d \n",sum/30);
}
