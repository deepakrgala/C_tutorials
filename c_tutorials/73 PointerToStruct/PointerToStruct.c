/* If there is pointer to structure & also members as a pointers
   First allocate memory to outer most pointer(Structure to pointer) then its individual structure member pointer
   While deallocating first deallocate memory for all its members followed by outermost pointer */
   
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

struct LinkedIn
{
  char *l_FirstName;
  char *l_LastName;
  char *l_EmailId;
  int l_ExpInYears;
  float l_AvgSal;
};

int main(int argc, char *argv[])
{
  struct LinkedIn *Profile1 = NULL;									// pointer to structure
  Profile1 = (struct LinkedIn*) malloc(sizeof(struct LinkedIn));		// memory allocation with syntax eg. profile.l_firstname = (char*) malloc(size)
  
  if(Profile1 != NULL)
  {
    printf("enter Profile details\n");
    Profile1->l_FirstName = (char*) malloc(SIZE);					// memory allocation only after struct pointer memory allocation
    if(Profile1->l_FirstName != NULL)
    {
       scanf("%s", Profile1->l_FirstName);
    }
    Profile1->l_LastName = (char*) malloc(SIZE);
    if(Profile1->l_LastName != NULL)
    {
      scanf("%s", Profile1->l_LastName);
    }
    Profile1->l_EmailId = (char*) malloc(SIZE);
    if(Profile1->l_EmailId != NULL)
    {
      scanf("%s", Profile1->l_EmailId);
    }
    scanf("%d", &Profile1->l_ExpInYears);
    scanf("%f", &Profile1->l_AvgSal);
  
    printf("Linked In Profile1 Details\n");
    printf("First Name:%s\n", Profile1->l_FirstName);
    printf("Last Name:%s\n", Profile1->l_LastName);
    printf("Email Id:%s\n", Profile1->l_EmailId);
    printf("Exp in Years:%d\n", Profile1->l_ExpInYears);
    printf("Avg Sal:%f\n", Profile1->l_AvgSal);
  }
  if(Profile1->l_LastName != NULL)
  {
    free(Profile1->l_LastName);
    Profile1->l_LastName = NULL;
  }
  if(Profile1->l_LastName != NULL)
  {
    free(Profile1->l_LastName);
    Profile1->l_LastName = NULL;
  }
  if(Profile1->l_EmailId != NULL)
  {
    free(Profile1->l_EmailId);
    Profile1->l_EmailId = NULL;
  }
  if(Profile1 != NULL)
  {
    free(Profile1);						// struct pointer memory deallocation only after its pointer data member memory is deallocated
    Profile1 = NULL;
  }
  system("PAUSE");	
  return 0;
}

