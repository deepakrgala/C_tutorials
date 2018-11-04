#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float N1=0.0f;
	float N2=0.0f;
	
	printf("Enter the values of N1 and N2: ");
	scanf("%f %f", &N1, &N2);
	
	printf("\n The modulus of %f and %f is %f \n", N1, N2, fmod(N1,N2));
	
	system("PAUSE");
	
	return 0;
}
