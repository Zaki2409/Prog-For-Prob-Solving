#include <stdio.h>
int main(){
    int n , i , factorial=1;
    printf(" please enter number : ");
    scanf("%d" , &n);
    /*
    for ( i = n; i >0 ; i--)
    {
    factorial *= i;
    }*/
    for(i=1;i<=num;i++){
      factorial=factorial*i;
  }
    printf("the facorial of %d is %d", n , factorial );
    
 return 0;   
}