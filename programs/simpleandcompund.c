#include <stdio.h>

int main() {
    int A ,B ,C, P , R , T;
  printf(" enter initial principal balance :");
  scanf("%d" , &P);
  printf(" enter annual rate :");
  scanf("%d" , &R);
  printf(" enter time in yrs :");
  scanf("%d", &T);
 
 int Q ,Z ,Y ,E ,R ;
 printf(" enter initial principal balance: ");
 scanf("%d , & &Q");
 printf(" enter interrest rate: ");
 scanf("%d" , &S);
 printf(" enter num of times interest is applied per time period: ");
 scanf("%d" , &N);
 printf(" enter no of time period elapsed: ");
 scanf("%d" , &U);

 Z = S / N ;
 Y = N * U ;
 R = Q * 1 + Z;
 E = R ^ Y;

 printf(" COMPOUND INTEREST IS : %d" , E );

B = R * T;
 C = 1 + B; 
 A = P * C;
 
printf(" simple interest is equal :%d" , A );
return 0;

}