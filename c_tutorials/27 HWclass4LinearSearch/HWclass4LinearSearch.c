/* Linear Search */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int array[100], search, c, n;
 
	printf("Enter the number of elements in array\n");
	scanf("%d",&n);
 
	printf("Enter %d integer(s)\n", n);
 
	for (c = 0; c < n; c++)
    	scanf("%d", &array[c]);
 
	printf("Enter the number to search\n");
	scanf("%d", &search);
 
	for (c = 0; c < n; c++)
	{
    	if (array[c] == search)     /* if required element found */
      	{
        	printf("%d is present at location %d.\n", search, c+1);
        	break;
      	}
   	}
   	if (c == n)
    	printf("%d is not present in array.\n", search);
 
	system("PAUSE");
	return 0;
}
