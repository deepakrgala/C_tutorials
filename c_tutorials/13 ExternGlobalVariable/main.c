/*The idea is to re-use the existing variables declared in one file to other file*/

#include <stdio.h>
#include <stdlib.h>
#include "Log.h"

int main(int argc, char *argv[])
{  
  printf("Arthimatic Operations on operands (%d, %d)\n", Arg1, Arg2);
  printf("sum:%d\n", add(Arg1, Arg2));
  printf("diff:%d\n", sub(Arg1, Arg2));
  printf("prod:%d\n", prod(Arg1, Arg2));
  printf("mod:%d\n", mod(Arg1, Arg2));
  system("PAUSE");	
  return 0;
}

