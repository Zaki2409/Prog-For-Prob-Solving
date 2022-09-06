#include <stdio.h>
int main () {
// mark = student percentage
    float mark ;

    printf("percentage scored= ");
    scanf("%f" , &mark);
    printf("\n marks : %f\n" , mark);

   if (mark < 40)
   {
printf("failed");
   }   
   else if (mark < 60 )
   {
    printf("second class");
   }
   else if (mark < 70)
   {
    printf("first class");
   }
   else if( mark <101)
   {
    printf("distinction");
   }
    return 0;
}