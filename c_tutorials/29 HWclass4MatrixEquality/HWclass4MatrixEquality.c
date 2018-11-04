/* read two matrix of size 3x3 & check for equavality the matrix */

#include <stdio.h>
#include <stdlib.h>

	void readmat(int,int,int arr[10][10]);
	void writemat(int,int,int arr[10][10]);
	void matcheck(int, int, int a1[10][10], int a2[10][10]);

int main(int argc, char *argv[]) {
	
	int i,j,row1,col1,row2,col2;
	int arr1[10][10];
	int arr2[10][10];
	
	printf("Enter the number of rows and columns of the matrix 1: ");
	scanf("%d %d", &row1, &col1);
	
	printf("Enter the number of rows and columns of the matrix 2: ");
	scanf("%d %d", &row2, &col2);
	
	if((row1!=row2)||(col1!=col2))
		printf("Matrix 1 and Matrix 2 are not equal \n");
	else
	{
		readmat(row1,col1,arr1);	
		readmat(row2,col2,arr2);
	
		writemat(row1,col1,arr1);
		printf("\n \n");
		writemat(row2,col2,arr2);
		printf("\n \n");
	
		matcheck(row1,col1,arr1,arr2);
	}
	system("PAUSE");
	return 0;
}

void readmat(int row, int col,int arr[10][10])
{
	int i,j;
	for(i=0; i<row;i++)
	{
		printf("\n Enter the elements of row %d: ",i+1);
		
		for(j=0; j<col; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}

void writemat(int row, int col, int arr[10][10])
{
	int i,j;
	for(i=0; i<row;i++)
	{	printf("\n");	
		for(j=0; j<col; j++)
		{
			printf("%d ",arr[i][j]);
		}
	}
}

void matcheck(int row, int col, int a1[10][10], int a2[10][10])
{
	int flag=0;
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		if(a1[i][j]!=a2[i][j])
			flag=1;
	}
	if(flag==1)
		printf("\n Matrix 1 and Matrix 2 are not equal \n");
	else
		printf("\n Matrix 1 and Matrix 2 are equal \n");
}
