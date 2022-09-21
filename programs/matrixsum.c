#include <stdio.h>

int main()
{

    int num[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}

    };
    int num1[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}

    };
    printf("%d", num[1][0] + num1[1][0]);
    return 0;
}