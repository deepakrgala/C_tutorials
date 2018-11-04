/*Read Sort and Print Array using readArray, sortArray and printArray functions */

#include<stdio.h>
#include<stdlib.h>

void readArray(int *a, int size)
{
  int i=0;
  printf("Enter the elements of the array: ");
  for(;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
}

void printArray(int *a, int size)
{
  int i=0;
  for(;i<5;i++)
  {
    printf("a[%d]:%d\n", i, a[i]);
  }
}

void sortArray(int *arr, int size)
{
	int temp,i,j;
	
	for(i=0; i<size-1;i++)
	{
		for(j=0; j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}
		}
	}
}

int main(int argc, char *argv[])
{
	int arr[20], n;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	readArray(arr,n);
	printf("\n Before sorting \n");
	printArray(arr,n);
	sortArray(arr,n);
	printf("\n After sorting \n");
	printArray(arr,n);
	
	system("PAUSE");
	return(0);
}
