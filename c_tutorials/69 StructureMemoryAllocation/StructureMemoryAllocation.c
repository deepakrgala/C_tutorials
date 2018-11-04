/* The 2 structure variable can be stored in different locations but its members gets stored in continous bytes (if not dynamic allocation) */

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
  struct LinkedIn Profile1, Profile2;
  printf("Linked In Profile1 Details\n");
  printf("First Name:0x%x\n", Profile1.l_FirstName);
  printf("Last Name:0x%x\n", Profile1.l_LastName);
  printf("Email Id:0x%x\n", Profile1.l_EmailId);
  printf("Exp in Years:0x%x\n", &Profile1.l_ExpInYears);
  printf("Avg Sal:0x%x\n", &Profile1.l_AvgSal);
  printf("\n");
  printf("Linked In Profile2 Details\n");
  printf("First Name:0x%x\n", Profile2.l_FirstName);
  printf("Last Name:0x%x\n", Profile2.l_LastName);
  printf("Email Id:0x%x\n", Profile2.l_EmailId);
  printf("Exp in Years:0x%x\n", &Profile2.l_ExpInYears);
  printf("Avg Sal:0x%x\n", &Profile2.l_AvgSal);
  
  system("PAUSE");	
  return 0;
}

