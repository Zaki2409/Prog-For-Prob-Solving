#include <stdio.h>
#include <stdbool.h>
bool is_prime(int num);
int main() {
    int user_choice , i ;
printf("till which number: ");
scanf("%d" , &user_choice);

for ( i = 1; i < user_choice; i++)
{
    if (is_prime(i))
    {
    printf(" %d  is prime\n" ,i );
    }
    
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
