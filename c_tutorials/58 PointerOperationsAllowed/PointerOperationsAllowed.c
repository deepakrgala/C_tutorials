/* Only 2 arthimatic operations allowed on pointer address
   - Substraction of two pointers
   - Substraction of pointer from number
   - Addition of pointer to number

   None of the other operations allowed on pointers like division, multiplication, addition, modulus etc
  
   int *ptr1 = &var;
   int *ptr2 = &var1;

   ptr1+ptr2? --> NOT OK
   ptr1/ptr2? --> NOT OK
   ptr1*ptr2? --> NOT OK
   ptr1%ptr2? --> NOT OK

   Most of the arthimatic operations restricted on pointers due to address might go outside the range

Increment & Decrement on the pointers allowed
   Increment -- > Base address + sizeof(data_type)
   Decrement -- > Base address - sizeof(data_type) */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int var=10;
  int *ptr = &var;
  printf("ptr is pointing @ 0x%x\n", ptr);
  ptr++;
  printf("ptr is pointing @ 0x%x\n", ptr);
  system("PAUSE");	
  return 0;
}

