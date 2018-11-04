/* Reads and find max element of 2D array */

#include <stdio.h>
#include <stdlib.h>

void readArray(int a[][3], int row, int col);
int maxArray(int a[][3],int row, int col);

int main(int argc, char *argv[]) { 
	const int row=4;
	const int col=3;
	
	int max;
	int a[row][col];
	
	readArray(a, row, col);
	max=maxArray(a, row,col);
	
	printf("The max element is %d \n",max);
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

int maxArray(int a[][3],int row, int col)
{
	int r, c, max=a[0][0];
	for(r=0; r<row;r++)
		for(c=0;c<col;c++)
			if (max<a[r][c])
				max=a[r][c];
				
	return(max);
}


