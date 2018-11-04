// To trace the problem among 100's of file __FILE__ & __LINE__ directives helps lot as follows:

#include <stdio.h>
#include <stdlib.h>
#define N1 10
#define N2 20

#define SUM(N1, N2)   ((N1)+(N2))
#define DIFF(N1, N2)  ((N1)-(N2))
#define PROD(N1, N2)  ((N1)*(N2))
#define MOD(N1, N2)   ((N1)%(N2))

void fun(int, int);
int main(int argc, char *argv[])
{
  int num1=N1;
  int num2=N2;
  
  printf("Within Main() before fun()\n");
  printf("Currently control @ line:%d  and file:%s\n", __LINE__, __FILE__); 
  printf("sum:%d\n", SUM(num1, num2));
  printf("diff:%d\n", DIFF(num1, num2));
  printf("prod:%d\n", PROD(num1, num2));
  printf("mod:%d\n", MOD(num1, num2));
  
  printf("Currently control @ line:%d  and file:%s\n", __LINE__, __FILE__);
  
  fun(num1, num2);
  
  printf("Within Main() After fun()\n");
  printf("Currently control @ line:%d  and file:%s\n", __LINE__, __FILE__);
  printf("sum:%d\n", SUM(num1, num2));
  printf("diff:%d\n", DIFF(num1, num2));
  printf("prod:%d\n", PROD(num1, num2));
  printf("mod:%d\n", MOD(num1, num2));
  
  printf("Currently control @ line:%d  and file:%s\n", __LINE__, __FILE__);
  
  system("PAUSE");	
  return 0;
}

void fun(int num1, int num2)
{
#undef N1
#define N1 30
#undef N2
#define N2 50
  num1 = N1;
  num2 = N2;
  printf("Within fun()\n");
  printf("Currently control @ line:%d  and file:%s\n", __LINE__, __FILE__);
  printf("sum:%d\n", SUM(num1, num2));
  printf("diff:%d\n", DIFF(num1, num2));
  printf("prod:%d\n", PROD(num1, num2));
  printf("mod:%d\n", MOD(num1, num2)); 
  printf("Currently control @ line:%d  and file:%s\n", __LINE__, __FILE__);
} 

