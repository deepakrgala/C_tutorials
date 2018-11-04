/* Reads and find sum of elements of 2D array */

#include <stdio.h>
#include <stdlib.h>

void readArray(int a[][3], int row, int col);
int sumArray(int a[][3],int row, int col);

int main(int argc, char *argv[]) { 
	const int row=4;
	const int col=3;
	
	int sum;
	int a[row][col];
	
	readArray(a, row, col);
	sum=sumArray(a, row,col);
	
	printf("The sum is %d \n",sum);
	system("PAUSE");	
	return 0;
}

void readArray(int a[][3], int row, int col)
{
	int r, c;
	printf("Enter the elements of array (size 4x3): \n");
	for(r=0; r<row;r++)
		for(c=0;c<col;c++)
			scanf("%d", &a[r][c]);
}

int sumArray(int a[][3],int row, int col)
{
	int r, c, sum=0;
	for(r=0; r<row;r++)
		for(c=0;c<col;c++)
			sum+=a[r][c];
				
	return(sum);
}


