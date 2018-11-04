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
	int i, j, number;
	
	printf("Enter the number of lines ");
	scanf("%d", &number);
	
	for(i=1; i<=number; i++)
		for(j=0;j<=i ; j++)
			if(i==j)
				printf("\n");
			else 
				printf(" * ");
		
	return(0);
}

