/*The stack memory allocates from higher address to lower address*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a=10;
  int b=20;
  int c=30;
  printf("@a --> 0x%x\n", &a);
  printf("@b --> 0x%x\n", &b);
  printf("@c --> 0x%x\n", &c);
  system("PAUSE");	
  return 0;
}

