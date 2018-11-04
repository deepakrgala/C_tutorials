/* Bubble sort (Ascending order) */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr[]={10, 20, 5, 2, 7, 6, 90, 8, 9, 110};
	int temp,i,j;
	
	for(i=0; i<10-1;i++)
	{
		for(j=0; j<10-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}
		}
	}
	
	printf("the ascending order sorted array is \n");
	for(i=0; i<10-1; i++)
	{
		printf("arr[%d] = %d \n",i,arr[i]);
	}
	
	
	system("PAUSE");
	return 0;
}
