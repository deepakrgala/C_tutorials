#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	
	int arr[20];
	int i,size;
 
	printf("Enter total no. of the elements : ");
	scanf("%d",&size);
 
	printf("Enter total %d elements : \n",size);
 	for(i=0; i<size; i++)
 		scanf("%d",&arr[i]);
