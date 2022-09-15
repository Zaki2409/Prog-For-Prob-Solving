#include <stdio.h>

int main () {
int sum=0 , n ,remainder =0, reverse=0, remainder1=0;
printf("enter a +ve number :\n");
scanf("%d" , &n);
while (n>0)
{
    remainder = n%10;
    sum = sum + remainder ;
    n=n/10;
}

    printf("\n SUM IS %d\n", sum);
     while (sum !=0 )
     
    {
   remainder1 = sum % 10 ;
   reverse = reverse * 10 + remainder1;
   sum=sum/10;
    }
    printf("reverse number is %d\n" , reverse);

    return 0;
}