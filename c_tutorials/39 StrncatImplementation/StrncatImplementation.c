#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* usr_strncat(char* usr_str, char* str2, int size)
{	
	int i=strlen(usr_str);
	int j;
	
	for(j=0; size!=0; j++)
	{
		usr_str[i+j]=str2[j];
		size--;
	}
	usr_str[i+j]='\0';
	
	return(usr_str);
}

int main(int argc, char *argv[])
{	
	char str1[100] = "Hello";
	char* str2 = "World";

	
	char concat_str[100];
	strcpy(concat_str,str1);
   	printf("using strncat(): %s \n",strncat(str1,str2,3));

   
   	char concat_usr_str[100]="Hello";
   	printf("using usr_strncat(): %s \n",usr_strncat(concat_usr_str,str2,3));

	
	system("PAUSE");
	return(0);
	
}
