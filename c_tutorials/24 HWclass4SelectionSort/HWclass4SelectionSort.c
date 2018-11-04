/* Selection Sorting (Ascending order) */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr[50]={0};
	int len, i, j, min_location, temp;


/* take the elements of array from user */
	printf("Enter the length of the array: ");
	scanf("%d",&len);
	printf("enter element %d of the array: ");
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}

	
	for(i=0;i<len-1;i++)
	{
		min_location=i;
		
		for(j=i+1; j<len;j++)				/*check the location of minimum value from all elements */
		{
			if(arr[j]<arr[min_location])
				min_location=j;				/*store the location of minimum value */
		}
		
		temp=arr[i];						/*take the minimum value in the beginning by swapping */
		arr[i]=arr[min_location];
		arr[min_location]=temp;
	}
	
	printf("\n the sorted array is ");
	for(i=0; i<len;i++)
	{
		printf("value of element %d of array is %d \n", i+1, arr[i]);
		
	}
	
	system("PAUSE");	
	return 0;
}
