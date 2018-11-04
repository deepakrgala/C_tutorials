/* Reads and search for an element in 2D array and return max of a specific row */

#include <stdio.h>
#include <stdlib.h>

void readArray(int a[][3], int row, int col);
int maxRowArray(int a[][3],int row, int col, int rowno);

int main(int argc, char *argv[]) { 
	const int row=4;
	const int col=3;
	int a[row][col];
	int rowno, result=0;
	readArray(a, row, col);
	
	printf("Enter the row number: ");
	scanf("%d",&rowno);
	
	result=maxRowArray(a, row,col, rowno);
	printf("The maximum element of row %d is %d\n",rowno, result);
	
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

int maxRowArray(int a[][3],int row, int col,int rowno)
{
	int r, c;
	int result=a[rowno-1][0];
	for(r=rowno-1,c=0;c<col;c++)
		if(a[r][c]>result)
			result=a[r][c];
	return(result);
}

