#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char* usr_strdup (const char *s) {
    char *d = malloc (strlen (s) + 1);   // Space for length plus nul
    if (d == NULL) return NULL;          // No memory
    strcpy (d,s);                        // Copy the characters
    return d;                            // Return the new string
}

int main(int argc, char *argv[]) {
	
	char* str1="Hello World!";
	
	printf("The original string is %s at adress %d \n",str1, str1);
	
	char *d=usr_strdup(str1);
	printf("The copied string is %s at address %d \n",d, d);
	
	
	
	return 0;
}
