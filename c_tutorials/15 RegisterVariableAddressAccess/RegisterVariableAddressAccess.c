/* It is not a good programming practice to access the address of register variables because they gets stored in 
   microcontroller register & compiler will throw warning or error */

#include <stdio.h>
#include <stdlib.h>

void fun(int *i)
{
  static int sum=0;
  sum = sum + *i;
  printf("When i:%d & value of sum is:%d\n", *i, sum);
}
int main(int argc, char *argv[])
{
  register int i=0;
  for(i=0;i<5;i++)
  {
    fun(&i); //Invalid access of address
  }
  system("PAUSE");	
  return 0;
}

