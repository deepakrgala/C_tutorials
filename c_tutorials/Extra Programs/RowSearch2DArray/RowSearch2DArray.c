/* Reads and search for an element in 2D array and return row number */

#include <stdio.h>
#include <stdlib.h>

void readArray(int a[][3], int row, int col);
int searchArray(int a[][3],int row, int col, int num);

int main(int argc, char *argv[]) { 
	const int row=4;
	const int col=3;
	int a[row][col];
	int num, result=0;
	readArray(a, row, col);
	
	printf("Enter the number to be searched: ");
	scanf("%d",&num);
	
	result=searchArray(a, row,col,num);
	if(result!=-1)
		printf("%d FOUND in row %d\n",num, result+1);
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

int searchArray(int a[][3],int row, int col,int num)
{
	int r, c;
	int row_no=-1;
	for(r=0; r<row;r++)
		for(c=0;c<col;c++)
			if(num==a[r][c])
			row_no=r;
	
	return(row_no);
}


