#include <stdio.h>
#include <stdlib.h>

void fun(int a[], int size)
{
  int i=0;
  for(;i<5;i++)
  {
    printf("a[%d]:%d\n", i, a[i]);
  }
}
int main(int argc, char *argv[])
{
    int arr[5] = {1,2,3,5,6};
    fun(arr, 5);
    system("PAUSE");	
    return 0;
}

