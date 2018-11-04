/* strtok() modifies its argument string by terminating tokens with NULL before returning*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char* usr_strchr(char* str1, char ch)
{
	int i=0;
	while(str1[i]!=ch)
	{
		i++;
	}
	return(str1);
}


int main(int argc, char *argv[]) {
	
	char* str1="Hello - World I am here -";
	char* token;
	
	token=strtok(str1," -");
	
	while(token!=NULL)
	{
		printf("%s\n",*token);
		token=strtok(NULL," -");  //continue from NULL to next NULL
	}
//	printf(" the string from 'o' using strtok(str1,'o') is: %s \n",strtok(str1,"-"));
	
//	printf("\n the string from 'o' using usr_strchr(str1,'o') is: %s \n", usr_strchr(str1,'o'));
	
	
	system("PAUSE");
	return 0;
}
