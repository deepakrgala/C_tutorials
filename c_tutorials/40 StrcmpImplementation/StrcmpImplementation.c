#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int usr_strcmp(char* str1, char* str2)
{
	int flag=0;
	
	if(strlen(str1)!=strlen(str2))
	return(1);
	
	else
	while(*str1!='\0')
	{
		if(*str1!=*str2)
		return(1);
		str1++;
		str2++;
	}
	return(0);
}

int main(int argc, char *argv[]) {
	
	char str1[20];
	char str2[20];
	
	printf("Enter the strings to be compared: ");
	scanf("%s %s", &str1, &str2);
	
	/* using strcmp */
	int i=strcmp(str1,str2);
	printf("using strcmp():  %s", i==0?"same":"not same");
	
	/* using usr_cmp */
	int j=usr_strcmp(str1,str2);
	printf("\n using usr_strcmp(): %s \n", j==0?"same":"not same");
	
	
	
	return 0;
}
