/* Reads and search for an element in 2D array */

#include <stdio.h>
#include <stdlib.h>
typedef enum {false,true} bool;

void readArray(int a[][3], int row, int col);
bool searchArray(int a[][3],int row, int col, int num);

int main(int argc, char *argv[]) { 
	const int row=4;
	const int col=3;
	int a[row][col];
	int num;
	readArray(a, row, col);
	
	printf("Enter the number to be searched: ");
	scanf("%d",&num);
		
	if(searchArray(a, row,col,num))
		printf("%d FOUND \n",num);
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

bool searchArray(int a[][3],int row, int col,int num)
{
	int r, c;
	bool flag=false;
	for(r=0; r<row;r++)
		for(c=0;c<col;c++)
			if(num==a[r][c])
			flag=true;
	
	return(flag);
}


