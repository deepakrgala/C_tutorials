/*Example to understand the scope of auto variable:*/

#include <stdio.h>
#include <stdlib.h>

void fun(int i) //auto variable
{
  int sum=0; // auto variable
  sum = sum + i; //sum will be erased & re-created every time when function is called
  printf("When i:%d & value of sum is:%d\n", i, sum);
}
int main(int argc, char *argv[]) //auto variable
{
  int i=0; // auto variable
  for(i=0;i<5;i++)
  {
    fun(i);
  }
  system("PAUSE");	
  return 0;
}

