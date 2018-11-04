/*There can be void pointer or generic pointer used for storing the data of type any type
   This pointer can be used in the cases where unknown data need to be processed */
   
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
  
  void *ptr = NULL;
  
  //case1: void pointer acts as a integer pointer
  ptr = p1;
  printf("value of p1 using ptr is :%d\n", *(int *)ptr);
  
  //case1: void pointer acts as a floating pointer
  ptr = p2;
  printf("value of p2 using ptr is :%f\n", *(float *)ptr);
  
  //case 3: void pointer acts as a double pointer
  ptr = p3;
  printf("value of p3 using ptr is :%lf\n", *(double *)ptr);
  
  //case 4: void pointer acts as a char pointer
  ptr = p4;
  printf("value of p4 using ptr is :%c\n", *(char *)ptr);
  
  system("PAUSE");	
  return 0;
}

