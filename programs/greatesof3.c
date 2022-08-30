#include <stdio.h>
int main(){
    int x,y,z, greatest=0;
    printf("tel any three worlds:");
    scanf("%d %d %d",&x ,&y ,&z);
    printf("the numbers are %d %d %d", x,y,z);
   if (x>y)
   {
    greatest=x;
   }
   else if(y>z)
   {
    greatest=y;
   }
   else {
    greatest=z
   }

  printf("greatest number is %d ", greatest);
    return 0;
}
