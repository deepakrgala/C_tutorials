/*If we initialize the 2D during declaration then no need to mention the size of row */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a[2][3] = {{1,2,3},
                   {3,4,5}
                  };

/* or
     int a[][3] = {{1,2,3},
                   {3,4,5}
                  };

   or
       int a[][3] = {1,2,3,3,4,5};
*/
  
    int i=0 ,j=0;
    
    for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
      {
         printf("a[%d][%d]:%d ", i,j,a[i][j]);
      }
      printf("\n");
    }
    system("PAUSE");	
    return 0;
}

