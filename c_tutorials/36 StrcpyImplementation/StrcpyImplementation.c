#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char* usr_strcpy(char*usr_dest, char*src)
{
	char *temp = usr_dest;   
	
	while(*src!='0')
	{
		*usr_dest=*src;
		usr_dest++;
		src++;
	}
	return(temp);		// return the starting address of the copied string
}

int main(int argc, char *argv[]) {
	
	char *src="Hello World";
	char *dest = (char *) malloc(strlen(src)+1);
	char *usr_dest = (char *) malloc(strlen(src)+1);
	
	
	printf("copied string using strcpy() is: %s \n",strcpy(dest,src));
	printf("copied string using usr_strcpy() is: %s \n", usr_strcpy(usr_dest,src));
	
	
	
	
	
	return 0;
}
