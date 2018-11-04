#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* usr_strncpy(char* dest1, const char* src, int size)
{
  char* temp = dest1;      
  while(size)
  {
    *dest1 = *src;
    dest1++;
    src++;
    size--;
  }
  *dest1 = '\0';
  return temp;
}
int main(int argc, char *argv[])
{
  char* src = "C-Programming";
  char *dest = (char*) malloc(strlen(src)+1);
  char *dest1 = (char *) malloc(strlen(src)+1);
  if(dest != NULL)
  {
    printf("strncpy(dest, src):%s\n", strncpy(dest, src,5));
  }
  if(dest1 != NULL)
  {
    printf("usr_strncpy(dest1, src):%s\n", usr_strncpy(dest1, src,5));
  }
  system("PAUSE");	
  return 0;
}

