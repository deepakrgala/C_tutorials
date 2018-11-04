/*
write down a complete C program that performs the following
1.	Define an array called grades of size 20 and type int, and another array called names to store student names for 20 students 
	( assume maximum length for name is 9 characters). 
2.	Read 20 different values of grades and names inside the two arrays using scanf. The reading process should be done using loop. 
	The values of grade should be in the range of 0 to 100 inclusive. 
3.	Calculate the average of the grades. 
4.	Calculate the highest grade and display the name of the person who has the highest grade. 
Do not use functions in the above program, only the main function.
*/


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grades[20], i, sum=0;
	int highest=0;
	int pos=0;
	char names[20][9];
	
	printf("Enter name and grades(0 to 100 inclusive) of 20 students: \n");
	for(i=0;i<20;i++)
	{	scanf("%s %d",&names[i][0], &grades[i]);
		sum+=grades[i];
		if(highest<grades[i])
			{
				highest=grades[i];
				pos=i;
			}
	}
	printf("\n Average = %f \n %s has highest grade of %d \n",(float)sum/20,names[pos],highest);
	return 0;
}
