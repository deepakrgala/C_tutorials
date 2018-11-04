#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Fab(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fab(n-1) + Fab(n-2) );
} 

int main(int argc, char *argv[]) {
	
	int i, number;
	
	printf("Enter the numbers in fibonacci series: ");
	scanf("%d",&number);
	
	printf("\nThe fibonacci series is ");
	
	for(i=1; i<=number;i++)
	printf("%d  ", Fab(i));
	
	return 0;
}
