/* Reads and search for an element in 2D array and return row number and column number using call by reference */

#include <stdio.h>
#include <stdlib.h>

void readArray(int a[][3], int row, int col);
int searchArray(int a[][3],int row, int col, int num, int *rowno, int *colno);

int main(int argc, char *argv[]) { 
	const int row=4;
	const int col=3;
	int rowno, colno;
	int a[row][col];
	int num, result=0;
	readArray(a, row, col);
	
	printf("Enter the number to be searched: ");
	scanf("%d",&num);
	
	result=searchArray(a, row,col,num, &rowno, &colno);
	if(result!=-1)
		printf("%d FOUND in row %d and column %d\n",num, rowno, colno);
	else
		printf("%d NOT FOUND \n",num);
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

int searchArray(int a[][3],int row, int col,int num,int *rowno, int *colno)
{
	int r, c;
	int result=-1;
	for(r=0; r<row;r++)
		for(c=0;c<col;c++)
			if(num==a[r][c])
			{
				*rowno=r+1;
				*colno=c+1;
				result=1;
			}
	return(result);
}

