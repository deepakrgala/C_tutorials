/* checks if (no1)^(no2)= no3 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef enum {false=0, true=1}bool;

bool CheckPower(int no1, int no2, int no3);
int main(int argc, char *argv[]) {
	
	int no1, no2, no3;
	bool result;
	
	printf("Enter three numbers: ");
	scanf("%d %d %d", &no1, &no2, &no3);

	result=CheckPower(no1, no2, no3);
	
	if(result)
		printf("(%d)^(%d)= %d \n", no1, no2, no3);
	else
		printf("(%d)^(%d) is not %d \n", no1, no2, no3);
	return 0;
}

bool CheckPower(int no1, int no2, int no3)
{
	if (pow(no1,no2)==no3)
		return(true);
	else 
		return(false);
}
