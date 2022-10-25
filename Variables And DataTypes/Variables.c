#include <stdio.h>

int main()
{
    int i, j;
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
    for (j = 0; j < 1; j++)
    {

        for (i = 0; i < 1; i++)
        {
            printf("%d\t", num[j][i] + num1[j][i]);
            printf("%d\n", num[j][i + 1] + num1[j][i + 1]);
            printf("%d\t", num[j + 1][i] + num1[j + 1][i]);
            printf("%d\n", num[j + 1][i + 1] + num1[j + 1][i + 1]);
            printf("%d\t", num[j + 2][i] + num1[j + 2][i]);
            printf("%d\n", num[j + 2][i + 1] + num1[j + 2][i + 1]);
        }
    }

    return 0;
}