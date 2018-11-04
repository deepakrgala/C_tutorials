/* Reads and search for an element in 2D array and return sum of elements of a specific Column */

#include <stdio.h>
#include <stdlib.h>

void readArray(int a[][3], int row, int col);
int sumColArray(int a[][3],int row, int col, int colno);

int main(int argc, char *argv[]) { 
	const int row=4;
	const int col=3;
	int a[row][col];
	int colno, result=0;
	readArray(a, row, col);
	
	printf("Enter the column number: ");
	scanf("%d",&colno);
	
	result=sumColArray(a, row,col, colno);
	printf("The sum of elements of Column %d is %d\n",colno, result);
	
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

int sumColArray(int a[][3],int row, int col,int colno)
{
	int r, c;
	int result=0;
	for(c=colno-1,r=0; r<row;r++)
		result+=a[r][c];
	return(result);
}

