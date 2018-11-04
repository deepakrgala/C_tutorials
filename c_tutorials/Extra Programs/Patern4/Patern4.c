/* prints 

     *
    **
   ***
  ****
 *****

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, k, number;
	
	printf("Enter the number of lines ");
	scanf("%d", &number);
	
	for(k=1; k<=number; k++)
	{
		for(i=number-k; i>=1; i--)
			printf(" ");
		for(j=1;j<=k ; j++)
			printf("*");
			
			printf("\n");
	}
	
	return(0);
}

