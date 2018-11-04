/* Write a program to print the 2nd smallest element in array */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
int arr[5] = {1,2,10,4,50};
int i=0;
int smallest=arr[0];
int sec_smallest=arr[1];
int temp = 0;

for(i=0;i<4;i++)
{
	temp=arr[i+1];
	if (temp<smallest)
	{
		sec_smallest=smallest;
		smallest=temp;
	}
	else if (temp<sec_smallest)
			sec_smallest=temp;
}

printf("second smallest = %d\n",sec_smallest);
system("PAUSE");
return 0;
}
