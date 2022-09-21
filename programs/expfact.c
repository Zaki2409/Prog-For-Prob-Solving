#include <stdio.h>
#include <math.h>


int main () {
    int factnum , factorial = 1 , i;
 printf( " expression is equal to : 1 - x/2 + x^2/4 - x^3/6\n");
 printf("write the value of x : ");
 scanf("%d" , &factnum);

 for(i=1;i<=factnum;i++){
      factorial=factorial*i;
  }
    printf("the facorial of %d is %d\n", factnum , factorial );

float z = (factorial/2);
float y = (pow(factorial,1/2));
float x = (pow(factorial,1/2));
printf("the answer is :%f " , (1 - z + y - x));    
    return 0;
}