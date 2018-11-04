#include <stdio.h>
#include <stdlib.h>

void fun(int i)
{
  static int sum=0; //static variable are initialized to 0 by default for the first time. sum is a local static variable
  sum = sum + i;
  printf("When i:%d & value of sum is:%d\n", i, sum);
}
int main(int argc, char *argv[])
{
  int i=0;
  for(i=0;i<5;i++)
  {
    fun(i);
  }
  system("PAUSE");	
  return 0;
}

