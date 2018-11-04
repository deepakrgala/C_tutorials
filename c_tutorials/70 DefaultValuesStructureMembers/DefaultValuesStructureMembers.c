/* The default values of the structure is based on storage class
   auto -- Garbage
   static -- zero  */

#include <stdio.h>
#include <stdlib.h>

struct LinkedIn
{
  char l_FirstName[20];
  char l_LastName[20];
  char l_EmailId[20];
  int l_ExpInYears;
  float l_AvgSal;
};

int main(int argc, char *argv[])
{
  struct LinkedIn Profile1;
  static struct LinkedIn Profile2;
  printf("Linked In Profile1 Details\n");
  printf("First Name:%s\n", Profile1.l_FirstName);
  printf("Last Name:%s\n", Profile1.l_LastName);
  printf("Email Id:%s\n", Profile1.l_EmailId);
  printf("Exp in Years:%d\n", Profile1.l_ExpInYears);
  printf("Avg Sal:%f\n", Profile1.l_AvgSal);
  printf("\n");
  printf("Linked In Profile2 Details\n");
  printf("First Name:%s\n", Profile2.l_FirstName);
  printf("Last Name:%s\n", Profile2.l_LastName);
  printf("Email Id:%s\n", Profile2.l_EmailId);
  printf("Exp in Years:%d\n", Profile2.l_ExpInYears);
  printf("Avg Sal:%f\n", Profile2.l_AvgSal);
  
  system("PAUSE");	
  return 0;
}

