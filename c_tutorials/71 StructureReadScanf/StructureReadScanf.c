/* We can read the structure variables from the standard input as well
Good programming practice is to initialize the auto structure as well to avoid the static warning */

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
  struct LinkedIn Profile1 = {0};		// Initializing auto structure
  
  printf("enter Profile details\n");	// no '&' as array name itself is its address
  scanf("%s", Profile1.l_FirstName);
  scanf("%s", Profile1.l_LastName);
  scanf("%s", Profile1.l_EmailId);
  scanf("%d", &Profile1.l_ExpInYears);
  scanf("%f", &Profile1.l_AvgSal);
  
  printf("Linked In Profile1 Details\n");
  printf("First Name:%s\n", Profile1.l_FirstName);
  printf("Last Name:%s\n", Profile1.l_LastName);
  printf("Email Id:%s\n", Profile1.l_EmailId);
  printf("Exp in Years:%d\n", Profile1.l_ExpInYears);
  printf("Avg Sal:%f\n", Profile1.l_AvgSal);
 
  system("PAUSE");	
  return 0;
}

