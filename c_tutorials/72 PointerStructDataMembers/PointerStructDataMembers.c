// Structure can contain the pointers as a its data members

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

struct LinkedIn
{
  char *l_FirstName;		// Pointer
  char *l_LastName;			// Pointer
  char *l_EmailId;			// Pointer
  int l_ExpInYears;
  float l_AvgSal;
};

int main(int argc, char *argv[])
{
  struct LinkedIn Profile1 = {0};
  
  printf("enter Profile details\n");
  Profile1.l_FirstName = (char*) malloc(SIZE);		// Memory allocation as variable was pointer
  if(Profile1.l_FirstName != NULL)					// address will be NULL if memory allocation fails
  {
     scanf("%s", Profile1.l_FirstName);
  }
  Profile1.l_LastName = (char*) malloc(SIZE);
  if(Profile1.l_LastName != NULL)
  {
     scanf("%s", Profile1.l_LastName);
  }
  Profile1.l_EmailId = (char*) malloc(SIZE);
  if(Profile1.l_EmailId != NULL)
  {
     scanf("%s", Profile1.l_EmailId);
  }
  scanf("%d", &Profile1.l_ExpInYears);
  scanf("%f", &Profile1.l_AvgSal);
  
  printf("Linked In Profile1 Details\n");
  printf("First Name:%s\n", Profile1.l_FirstName);
  printf("Last Name:%s\n", Profile1.l_LastName);
  printf("Email Id:%s\n", Profile1.l_EmailId);
  printf("Exp in Years:%d\n", Profile1.l_ExpInYears);
  printf("Avg Sal:%f\n", Profile1.l_AvgSal);
  
  if(Profile1.l_LastName != NULL)
  {
    free(Profile1.l_LastName);					// deallocation of memory allocated
    Profile1.l_LastName = NULL;					// to avoid Dangling pointer problem
  }
  if(Profile1.l_LastName != NULL)
  {
    free(Profile1.l_LastName);
    Profile1.l_LastName = NULL;
  }
  if(Profile1.l_EmailId != NULL)
  {
    free(Profile1.l_EmailId);
    Profile1.l_EmailId = NULL;
  }
 
  system("PAUSE");	
  return 0;
}

