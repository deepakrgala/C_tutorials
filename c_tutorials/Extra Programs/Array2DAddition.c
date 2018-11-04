/* Read, Add and Print 2D array */

#include <stdio.h>
#include <stdlib.h>

void readArray(int a[][3], int row, int col);
void addArray(int a[][3],int b[][3], int result[][3],int row, int col);
void printArray(int a[][3], int row, int col);

int main(int argc, char *argv[]) { 
	const int row=4;
	const int col=3;
	
	int a[row][col];
	int b[row][col];
	int c[row][col];
	
	readArray(a, row, col);
	readArray(b, row, col);
	addArray(a,b,c, row,col);
	printArray(c, row, col);

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

void addArray(int a[][3],int b[][3], int result[][3],int row, int col)
{
	int r, c;
	for(r=0; r<row;r++)
		for(c=0;c<col;c++)
			result[r][c]=a[r][c]+b[r][c];
}

void printArray(int a[][3], int row, int col)
{
	int r, c;
	printf("Array entered: \n");
	for(r=0; r<row;r++)
	{
		for(c=0;c<col;c++)
			printf("%d ", a[r][c]);
	
		printf("\n");			
	}
}

