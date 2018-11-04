
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void readGrades(int *a, int size)
{
	int i=0;
	for(; i<size;i++)
	scanf("%d", &a[i]);
}

float GetAverage(int *a, int size)
{
	int i, sum=0;
	for(i=0; i<size;i++)
	sum+=a[i];
	
	return((float)sum/size);
}

int GetHighest(int *a, int size)
{
	int highest,i=0;
	highest=a[0];
	for(; i<size;i++)
	if(a[i]>highest)
		highest=a[i];
		return(highest);
}

int main(int argc, char *argv[]) {

	int arr[SIZE], highest;
	float avg;
	printf("Enter 20 grades in the range of 0 to 100 inclusive: \n");
	readGrades(arr, SIZE);
	avg=GetAverage(arr, SIZE);
	highest=GetHighest(arr, SIZE);

	printf("Average = %f \nHighest = %d \n", avg, highest);
	return 0;
}
