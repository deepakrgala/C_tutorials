#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char* usr_strrchr(char* str1, char ch)
{
	int i=strlen(str1);
	while(str1[i]!=ch)
		i--;
	return(str1+i);
}


int main(int argc, char *argv[]) {
	
	char* str1="Hello World";
	//char* str2="Hello World";
	int pos=strrchr(str1,'o') - str1;
	
	printf(" position of last 'o' is: %d \n",pos);
	printf(" the string from last 'o' using strrchr(str1,'o') is: %s \n",strrchr(str1,'o'));
	
	printf("\n the string from last 'o' using usr_strrchr(str1,'o') is: %s \n", usr_strrchr(str1,'o'));
	
	
	system("PAUSE");
	return 0;
}
