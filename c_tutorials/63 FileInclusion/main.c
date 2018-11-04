/* main.c:
------- */

#include <stdio.h>
#include <stdlib.h>
#include "Logic.h"

int main(int argc, char *argv[])
{
  printf("arg1:%d  arg2:%d\n", Arg1, Arg2);
  printf("add:%d\n", add(Arg1, Arg2));
  printf("sub:%d\n", sub(Arg1, Arg2));
  printf("prod:%d\n", prod(Arg1, Arg2));
  printf("mod:%d\n", mod(Arg1, Arg2));
  system("PAUSE");	
  return 0;
}


