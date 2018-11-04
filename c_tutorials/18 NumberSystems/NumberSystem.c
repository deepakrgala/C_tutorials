/*Write a program to convert given hex to decimal & octal*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dec=95;
	int oct=057;
	int hex=0xF5;
	
	printf("the octal and hexadecimal conversion of decimal number %d is %o and %x respectively \n",dec,dec,dec);
	printf("the decimal and hexadecimal conversion of octal number %o is %d and %x respectively \n",oct,oct,oct);
	printf("the decimal and octal conversion of hexadecimal number %x is %d and %o respectively \n",hex,hex,hex);
	
	return 0;
}

