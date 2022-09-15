
#include <stdio.h>

int prime();
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    prime(num);
    return 0;
}

int prime(int num)
{
    if ((num % 3 != 0) && (num % 2 != 0))
    {
        printf("it is a prime number  ");
    }
    else
    {
        printf("it is a composite number");
    }
}