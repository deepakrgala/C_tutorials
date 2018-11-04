/* In case of structure there will be padding concept where in compiler keep the new variable always the address divisible
   by 4 incase of 32-bit machine or 8 in case of 64-bit machine it can lead to holes being created when structure is 
   declared -- structural padding concept

   to avoid this structural padding we can use the #pragma directive as follows */

#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct example
{
  char a;//1
  int b; //4 
  float c; //4
};

int main(int argc, char *argv[])
{
  struct example ex;
  printf("sizeof(ex):%d\n", sizeof(ex));
  system("PAUSE");	
  return 0;
}

