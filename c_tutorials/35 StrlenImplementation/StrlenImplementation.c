#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int usr_strlen(const char* string);

int main(int argc, char *argv[]) {
	char *str = "Hello World";
	
	printf("\n strlen(str): %d \n", strlen(str));
	printf("\n usr_strlen(str): %d \n",usr_strlen(str));
	
	system("PAUSE");
	
	return 0;
}

int usr_strlen(const char *string)
{
	int len=0;
	while(*string !='\0')
	{
		string++;
		len++;
	}
	return(len);
}
