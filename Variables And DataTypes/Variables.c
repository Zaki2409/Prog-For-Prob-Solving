#include <stdio.h>
#include <stdlib.h>

void myFunction()
{
    int n, i, *ptr, sum = 0, mean;
    printf("Enter number of indices: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf(" unable to allocate memory");
    }
    else
    {
        printf("Enter elements of array:\n ");
        for (i = 0; i < n; ++i)
        {
            printf("enter number %d : ", i);
            scanf("%d", ptr + i);
            sum += *(ptr + i);
        }
        printf("Sum=%d\n", sum);
    }
}

void myFunction2()
{
    int n, i, *ptr, sum = 0, mean;
    printf("Enter number of indices: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf(" unable to allocate memory");
        ;
    }
    else
    {
        printf("Enter elements of array:\n ");
        for (i = 0; i < n; ++i)
        {
            printf("enter number %d : ", i);
            scanf("%d", ptr + i);
            sum += *(ptr + i);
            mean = (sum / n);
        }

        printf("mean=%d", mean);
    }
}
void myFunction3()
{
    int j, k, i, z int n, i, *ptr;
    printf("Enter number of indices: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf(" unable to allocate memory");
        ;
    }
    else
    {
        printf("Enter elements of array:\n ");
        for (i = 0; i < n; ++i)
        {
            printf("enter number %d : ", i);
            scanf("%d", ptr + i);
        }
        for (j = 0; j < n - 1; j++)
        {
            for (k = 0; k < n - 1; k++)
            {
                if (ptr + i[k] > ptr + i[k + 1])
                {
                    z = ptr + i[k];
                    ptr + i[k] = ptr + i[k + 1];
                    ptr + i[k + 1] = z;
                }
            }
        }
        printf(" sorted number are \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", *(ptr + i)[i]);
        }
    }

    printf("mean=%d", mean);
}
}
z int main()
{
    myFunction();
    myFunction2();
}