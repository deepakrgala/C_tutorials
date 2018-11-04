/* Function prototype can be declared within the local  scope as well just before it is invoked
   but it may not be accessable in other files & to access in other files need to declare function proto-type outside the function */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) //main function
{
  int _Arg1=0; //Actual argument
  int _Arg2=0; //Actual argument
  
  printf("Inside main function & its address is 0x%x\n", main);
  
  printf("Enter _Arg1 & _Arg2\n");
  scanf("%d %d", &_Arg1, &_Arg2);
  
  printf("Before swapping\n");
  printf("_Arg1:%d  _Arg2:%d\n", _Arg1, _Arg2);
  
  void swap_gen(int *, int *); //Function prootype
  swap_gen(&_Arg1, &_Arg2); //Function invoking statement
  
  printf("After swapping\n");
  printf("_Arg1:%d  _Arg2:%d\n", _Arg1, _Arg2);
  
  system("PAUSE");	
  return 0;
}

void swap_gen(int *p1, int *p2) //Function Defination 
{
  int temp;
  printf("Inside swap_gen function & its address is 0x%x\n", swap_gen);
  temp = *p1; //p1 & p2 are Formal Arguments
  *p1 = *p2;
  *p2 = temp;
}

