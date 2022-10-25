#include <stdio.h>

int main()
{
    char oper;
    double x, y;

    printf("enter the opertator :  ");
    scanf("%c", &oper);
    printf(" ertner two operands ");
    scanf("%1lf %1lf", &x, &y);
    

    switch (oper)
    {
    case '+':
        printf("%1f", x + y);
        break;
    case '-':
        printf("%1f ", x - y);
        break;
    case '*':
        printf("%1f", x * y);
        break;
    case '/':
        printf("%1f", x / y);
        break;
    }
    return 0;
}
