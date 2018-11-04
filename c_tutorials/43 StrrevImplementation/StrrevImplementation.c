#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


char* usr_strrev(char* str1)
{
	int i, j=0;
	char temp;
	
	for(i=0; i!=j;i++)
	{
		temp=str1[i];
		str1[i]=str1[j];
		str1[j]=temp;
	}
	return(str1);
}


int main(int argc, char *argv[]) {
	
	char str1[20] = "Hello World !!";
//	char* str2;
	
	printf("strrev(str1): %s \n",strrev(str1));
	
	printf("usr_strrev(str1): %s \n", usr_strrev(str1));
	
	
	return 0;
}
