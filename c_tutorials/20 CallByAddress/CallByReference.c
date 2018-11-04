#include <stdio.h>
#include <stdlib.h>

void swap_int(int *p1, int *p2); //Function Prototype

int main(int argc, char *argv[]) //Main Function or Calling Function
{
  int _arg1=0; //Actual arguments
  int _arg2=0; 
  
  printf("Enter _arg1 & _arg2\n");
  scanf("%d %d", &_arg1, &_arg2);
   
  printf("Before swapping\n");
  printf("_arg1:%d  _arg2:%d\n", _arg1, _arg2);
  
  swap_int(&_arg1, &_arg2); //Function invoking statement
  
  printf("After swapping\n");
  printf("_arg1:%d  _arg2:%d\n", _arg1, _arg2);
  system("PAUSE");	
  return 0;
}

void swap_int(int *p1, int *p2) //Function Defination
{
  int temp=0; //p1 & p2 are formal arguments
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

