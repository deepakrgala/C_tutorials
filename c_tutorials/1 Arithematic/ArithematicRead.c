/* Read the values from the keyboard*/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N1=0;
	int N2=0;
	
	printf("Enter the values of N1 and N2: ");
	scanf("%d %d", &N1, &N2);
	
	printf("\n The addition of %d and %d is %d", N1, N2, N1+N2);
	printf("\n The subtraction of %d and %d is %d", N1, N2, N1-N2);
	printf("\n The multiplaction of %d and %d is %d", N1, N2, N1*N2);
	printf("\n The division of %d and %d is %f", N1, N2, (float)N1/N2);
	printf("\n The modulus of %d and %d is %d \n", N1, N2, N1%N2);
	
	system("PAUSE");
	
	return 0;
}
