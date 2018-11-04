#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int no, nou, not, noh, noth, nott;
	
	printf("Enter a five digit number: ");
	scanf("%d",&no);
	
	nou=no%10;
	not=(no%100)/10;
	noh=(no%1000)/100;
	noth=(no%10000)/1000;
	nott=(no%100000)/10000;
	
	printf("\n %d \n %d \n %d \n %d \n %d", nou, not, noh, noth, nott);
	printf("\n The addition of all digits is %d", nou+not+noh+noth+nott);
	printf("\n Addition of Odd location digits is %d",nou+noh+nott);
	printf("\n Addition of Even loacation digits is %d \n", not+noth);
	
	system("PAUSE");
	return 0;
}
