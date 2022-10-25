#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *pi;
   float *pf;
   pi = (int *)malloc(10);
   pf = (float *)malloc(20);
   *pi = 1024;
   *pf = 3.14233;
   *pf = (float *)malloc(20);
   free(pi);
   free(pf);
   return 0;
}
