/* checks if the character entered is in lower case */

#include <stdio.h>
#include <stdlib.h>
typedef enum {false=0, true=1} bool;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool LowerCheck(char ch);
int main(int argc, char *argv[]) {
	char ch;
	bool result;
	printf("Enter the character: ");
	scanf("%c",&ch);
		
	result=LowerCheck(ch);
	if(result)
		printf("\n Is Lower case \n");
	else 
		printf("\n Not Lower case \n");
	
	return 0;
}

bool LowerCheck(char ch)
{
	if ((ch>=97) && (ch<=122))
		return(true);
	else 
		return(false);
}
