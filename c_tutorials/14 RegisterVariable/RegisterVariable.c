/*The scope of register variable will be within the function. Default value is garbage */

#include <stdio.h>
#include <stdlib.h>

void fun(int i)
{
  static int sum=0;
  sum = sum + i;
  printf("When i:%d & value of sum is:%d\n", i, sum);
}
int main(int argc, char *argv[])
{
  register int i=0;
  for(i=0;i<5;i++)
  {
    fun(i);
  }
  system("PAUSE");	
  return 0;
}

