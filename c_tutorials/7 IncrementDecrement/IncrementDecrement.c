#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int op=50;
  int result=0;
  
  result = ++op; //Pre-Increment, Increment & Assign
  printf("result:%d\t op:%d\n", result, op);
  
  result = op++; //Post-Increment, Assign & Increment
  printf("result:%d\t op:%d\n", result, op);
  
  result = --op; //Pre-decrement, decrement & Assign
  printf("result:%d\t op:%d\n", result, op);
  
  result = op--; //Post-decrement, Assign & decrement
  printf("result:%d\t op:%d\n", result, op);
  
  system("PAUSE");	
  return 0;
}

