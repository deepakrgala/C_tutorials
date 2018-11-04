/* Write a program to print the 2nd larget element in array */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
int arr[5] = {1,2,10,0,50};
int i=0;
int largest=arr[0];
int sec_largest=arr[1];
int temp = 0;

for(i=0;i<4;i++)
{
	temp=arr[i+1];
	if (temp>largest)
	{
		sec_largest=largest;
		largest=temp;
	}
	else if (temp>sec_largest)
			sec_largest=temp;
}

printf("second largest = %d\n",sec_largest);
system("PAUSE");
return 0;
}
