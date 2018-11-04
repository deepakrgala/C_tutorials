#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char* usr_strchr(char* str1, char ch)
{
	int i=0;
	while(str1[i]!=ch)
		i++;
		
	return(str1+i);
}


int main(int argc, char *argv[]) {
	
	char* str1="Hello World";
	//char* str2="Hello World";
	int pos=strchr(str1,'o') - str1;
	
	printf(" position of first 'o' is: %d \n",pos);
	printf(" the string from 'o' using strchr(str1,'o') is: %s \n",strchr(str1,'o'));
	
	printf("\n the string from 'o' using usr_strchr(str1,'o') is: %s \n", usr_strchr(str1,'o'));
	
	system("PAUSE");
	return 0;
}
