/* Converts Yards and Feets into equivalent Miles */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float YardFeetToMiles(int yd, int ft)
{
	float miles=0.0f;
	miles=((float)yd*3 + ft)/5280;
	
	return(miles);
}
int main(int argc, char *argv[]) {
	
	int yard, feet;
	printf("Equivalent distance of 1760 yards and 1320 feets in miles is %f \n",YardFeetToMiles(1760,1320));
	
//	printf("Enter the distance in yard and feet: ");
//	scanf("%d %d", &yard, &feet);
	
//	printf("Equivalent distance in miles is %f \n",YardFeetToMiles(yard,feet));
	
	return 0;
}
