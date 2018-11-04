/*function named MyPower that receives two values v and p, and returns the value of v^p. 
  Note, implement your function using recursion. */

#include <stdio.h>
#include <stdlib.h>

int MyPower(int v, int p)
{
   if ( p == 0 )
      return 1;
   else
      return (v*MyPower(v,p-1));
} 

int main(int argc, char *argv[]) {
	
	int v,p;
	printf("Enter the value of v and p: ");
	scanf("%d %d", &v, &p);
		
	printf("\n%d^%d = %d ",v, p, MyPower(v,p));
		
	return 0;
}
