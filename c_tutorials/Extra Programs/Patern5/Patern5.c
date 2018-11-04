/* Prints

  *
 ***
*****
 ***
  *

*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, number, k;
 
   printf("Enter the number of lines ");
   scanf("%d",&number);
 
   k=number;
 
   for(i=1; i<=number; i++)
   {
      for(j=1; j<k; j++)
         printf(" ");
 
      k--;
 
      for (j=1; j<=2*i-1; j++)
         printf("*");
 
      printf("\n");
   }
   
	number=number-1;
	k=number;
   for (i=number; i>0; i--)
   {
      for (j=k; j<=number; j++)
         printf(" ");
 
      k--;
 
      for (j=2*i-1; j>0; j--)
         printf("*");
 
      printf("\n");
   }

	system("PAUSE");
	return(0);
}

