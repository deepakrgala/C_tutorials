/*Write a program to read 5 numbers & find the greatest among them using conditional operator*/


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int no1, no2, no3, no4, no5, big;
	
	printf("Enter five numbers: ");
	scanf("%d %d %d %d %d", &no1, &no2, &no3, &no4, &no5);
	
	big=(no1>no2)? no1:no2;
	big=(big>no3)? big:no3;
	big=(big>no4)? big:no4;
	big=(big>no5)? big:no5;

	printf("\n The greates among all five is %d",big);

	return 0;
}
