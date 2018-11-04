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
  struct LinkedIn Profile = {"MARK", "CHUCK", "Mark.c@ge.com", 20, 432423.43f};
  printf("Linked In Profile Details\n");
  printf("First Name:%s\n", Profile.l_FirstName);
  printf("Last Name:%s\n", Profile.l_LastName);
  printf("Email Id:%s\n", Profile.l_EmailId);
  printf("Exp in Years:%d\n", Profile.l_ExpInYears);
  printf("Avg Sal:%f\n", Profile.l_AvgSal);
  system("PAUSE");	
  return 0;
}

