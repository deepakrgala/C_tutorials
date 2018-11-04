#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* usr_strcat(char* usr_str, char* str2)
{	
	int i=strlen(usr_str);
	int j;
	
	for(j=0; str2[j]!='\0'; j++)
		usr_str[i+j]=str2[j];
		
	usr_str[i+j]='\0';
	
	return(usr_str);
}

int main(int argc, char *argv[])
{	
	char str1[100] = "Hello";
	char* str2 = "World";

	
	char concat_str[100];
	strcpy(concat_str,str1);
   	printf("using strcat(): %s \n",strcat(str1,str2));

   
   	char concat_usr_str[100]="Hello";
   	printf("using usr_strcat(): %s \n",usr_strcat(concat_usr_str,str2));

	
	system("PAUSE");
	return(0);
	
}
