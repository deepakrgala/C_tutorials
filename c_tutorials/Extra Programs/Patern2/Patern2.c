/* prints 

*********
*********
*********
*********
*********

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, lines, stars;
	
	printf("Enter the number of lines: ");
	scanf("%d", &lines);
	
	printf("Enter the number of stars: ");
	scanf("%d", &stars);
	
	for(i=1; i<=lines; i++)
	{
		for(j=1;j<=stars ; j++)
			printf(" * ");
		printf("\n");
	}
	return(0);
}

