/*Write a program to validate the SSN number given by US authority.
If any one condition is failed then need to throw the error 

1. The number should contains at least 2 even numbers
2. The number should be divisible by 2 or even number
3. The 2nd, 4th digit must not be divisible by 5
4. The sume of 5th & 1st digit should not divisible by 7

Write all the unit test cases
-> Check for negative number
-> check for overflow etc
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

  long ssn;
  int valid=0;
  int count_even=0;

  printf("Enter the five digit SSN to be verified: ");
  scanf("%ld", &ssn);
  /* check for negative number */
  while ((ssn<=1) || (ssn>99999))
    { printf("Invalid ssn, please enter again: ");
      scanf("%d",&ssn);
    }

   /* even check */

  if(ssn%2==0)
    valid=1;
  else
    valid=0;

    /* even count */
  if(valid ==1)
  {
    if ((ssn%10)%2 ==0 )
    count_even++;
    if (((ssn/10)%10)%2 ==0 )
    count_even++;
    if (((ssn/100)%10)%2 ==0 )
    count_even++;
    if (((ssn/1000)%10)%2 ==0 )
    count_even++;
    if (((ssn/10000)%10)%2 ==0 )
    count_even++;

    if (count_even>1)
    valid=1;
    else
      valid=0;
   }
   if(valid==1)
   {
    if (((ssn/10)%10)%5 ==0 )
      valid=0;
    if (((ssn/10)%1000)%5 ==0 )
      valid=0;
    if (((ssn%10)+(ssn/10000))%7 ==0 )
      valid=0;
    if(((ssn/10000)%7)==0)
      valid=0;
    }
    if ((valid == 0) || (count_even<2))
      printf("\n Invalid SSN");
    else
      printf("\n Valid SSN");

      printf("even count is %d", count_even);

	return 0;
}
