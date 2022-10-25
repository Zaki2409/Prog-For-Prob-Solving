#include <stdio.h>
#include <malloc.h>

int main () {
int i, n, sum =0;
int *a;
printf("enter the size of array ");
scanf("%d" ,&n);
a = (int *) malloc(n * sizeof(int));
printf("enter the elements of the list \n");
for ( i = 0; i < n; i++)
{
    scanf("%d" , a + i);
}
for ( i = 0; i < n ; i++)
{
    sum = sum + *(a +i);
}
printf("sum = %d" , sum);
    return 0;
}