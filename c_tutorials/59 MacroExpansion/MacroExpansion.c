#include <stdio.h>
#include <stdlib.h>

/*Macro without argument*/
#define N1 10
#define N2 20

/*Macro with argument*/
#define SUM(N1, N2)  ((N1)+(N2))
#define DIFF(N1, N2)  ((N1)-(N2))
#define PROD(N1, N2)  ((N1)*(N2))
#define MOD(N1, N2)  ((N1)%(N2))

int main(int argc, char *argv[])
{
  int n1=N1;
  int n2=N2;
  
  printf("sum:%d\n", SUM(n1, n2));
  printf("diff:%d\n", DIFF(n1, n2));
  printf("prod:%d\n", PROD(n1, n2));
  printf("mod:%d\n", MOD(n1, n2));
  system("PAUSE");	
  return 0;
}

