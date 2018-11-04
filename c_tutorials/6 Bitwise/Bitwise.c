#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int N1=20;
  int N2=30;
  printf("(N1&N2):%d\n", (N1&N2));
  printf("(N1|N2):%d\n", (N1|N2));
  printf("(N1^N2):%d\n", (N1^N2));
  printf("(N1>>2):%d\n", (N1>>2));
  printf("(N1<<2):%d\n", (N1<<2));
  printf("(~N1):%d\n", (~N1));
  system("PAUSE");	
  return 0;
}

