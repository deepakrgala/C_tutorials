/*The size of any type of the pointer will be same because it is address which is fixed for controller.
   However the size of value of pointer will be different based on data type*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int *p1 = NULL;
  float *p2 = NULL;
  double *p3 = NULL;
  char *p4 = NULL;
  
  int _arg1 = 10;
  float _arg2 = 3.4f;
  double _arg3 = 3.4;
  char _arg4 = 'A';
  
  p1 = &_arg1;
  p2 = &_arg2;
  p3 = &_arg3;
  p4 = &_arg4;
  
  printf("sizeof(p1):%d\n", sizeof(p1));
  printf("sizeof(p2):%d\n", sizeof(p2));
  printf("sizeof(p3):%d\n", sizeof(p3));
  printf("sizeof(p4):%d\n", sizeof(p4));
  
  printf("sizeof(*p1):%d\n", sizeof(*p1));
  printf("sizeof(*p2):%d\n", sizeof(*p2));
  printf("sizeof(*p3):%d\n", sizeof(*p3));
  printf("sizeof(*p4):%d\n", sizeof(*p4));
  system("PAUSE");	
  return 0;
}

