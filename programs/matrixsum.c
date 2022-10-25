#include <stdio.h>

int main()
{
int r , c;
    int mat1[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}

    };
    int mat2[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    for (r = 0; r <= 2; r++)
    {
        for (c = 0; c <= 1; c++)
        {
            printf("%d\t", mat1[r][c] + mat2[r][c]);
        }
        printf("\n");
    }

        return 0;
    }