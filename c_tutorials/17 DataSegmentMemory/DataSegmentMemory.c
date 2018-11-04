/*The data segment allocates from lower address to higher address. Except Stack all memory are from lower to higher*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  static int a=10;
  static int b=20;
  static int c=30;
  printf("@a --> 0x%x\n", &a);
  printf("@b --> 0x%x\n", &b);
  printf("@c --> 0x%x\n", &c);
  system("PAUSE");	
  return 0;
}

