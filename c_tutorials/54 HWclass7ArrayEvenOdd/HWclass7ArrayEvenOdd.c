/*Write a program to print number of odd & even numbers in array, store all the even number & odd number in new arrays
& calculate the average of each of the array*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int MainArray[10] = {1,2,3,4,5,6,7,8,9,10};
    int EvenArray[10] = {0};
    int OddArray[10] = {0};
    
    int MainArrayIndex=0;
    int EvenArrayIndex=0;
    int OddArrayIndex=0;
    
    for(MainArrayIndex=0;MainArrayIndex<10;MainArrayIndex++)
    {
       if((MainArray[MainArrayIndex] % 2) == 0)
       {
         EvenArray[EvenArrayIndex] = MainArray[MainArrayIndex];
         EvenArrayIndex++;
       }
       else
       {
         OddArray[OddArrayIndex] = MainArray[MainArrayIndex];
         OddArrayIndex++;
       }
    }
    printf("Even elements in Array:\n");
    MainArrayIndex = EvenArrayIndex;
    while(MainArrayIndex)
    {
      printf("%d ", EvenArray[MainArrayIndex]);
      MainArrayIndex--;
    } 
    
    printf("Odd elements in Array: \n");
    MainArrayIndex = OddArrayIndex;
    while(MainArrayIndex)
    {
      printf("%d ", OddArray[MainArrayIndex]);
      MainArrayIndex--;
    }                                                  
    system("PAUSE");	
    return 0;
}

