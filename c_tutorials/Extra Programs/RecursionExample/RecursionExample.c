/* the nth value equals to (n-1 th)2 +1 and the first value is 1. Write a recursion function named f to compute the nth value. Use for loop to print the values of first 6 values. */

#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
   if ( n == 1 )
      return 1;
   else
      return ((f(n-1))*(f(n-1))+1);
} 


int main(int argc, char *argv[]) {
	
	int i, number=6;
		
	printf("\nThe series is ");
	
	for(i=1; i<=number;i++)
	printf("%d  ", f(i));
		
	return 0;
}

