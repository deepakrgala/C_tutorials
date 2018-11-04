#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i=0;
  int ii=1;
  int j=20;
  int k=30;
  int result=0;

  result = ii || ++j || ++k; //j & k statements won't execute here as ii=1
  printf(" ii:%d\t j:%d\t k:%d\t result:%d\n", ii, j, k, result);

  result = i && ++j && ++k; //j & k statements won't execute here as i=0
  printf("\n i:%d\t j:%d\t k:%d\t result:%d\n", i, j, k, result);



  result = i && ++j || ++k; // ++j statement won't execute here as i=0, but ++k will be executed

  printf("\n i:%d\t j:%d\t k:%d\t result:%d\n", i, j, k, result);
  system("PAUSE");	
  return 0;
}

