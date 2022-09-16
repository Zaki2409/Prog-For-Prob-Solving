
#include <stdio.h>
#include <stdbool.h>

bool is_prime();
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    if (is_prime(num))
    {
        printf("it a prime number");
    }
    else if (num > 1)
    {
        printf("it is a composite number");
    }
    else
    {
        printf("neither p or c");
    }
    return 0;
}

bool is_prime(int num)
{
    if (((num % 3 != 0) && (num % 2 != 0) && (num != 1)) || (num == 2))
    {
        return true;
    }
    return false;
}
