#include <stdio.h>
#include <math.h>


int main() {
    int base , power,x, y,sum=0, i;
 printf("enter the value of base: ");
 scanf("%d" , &base);
 printf("enter the value of power: ");
 scanf("%d" , &power);

 for ( x= 1 ; x <= power ; x++)
 {
  y = pow(base,x);
  sum =sum +y;
 printf("%d\t" , y);
 }
printf("\n gp is %d" , 1 + sum );
 
    return 0;
}


    
   
