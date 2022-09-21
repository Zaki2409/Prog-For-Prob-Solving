#include <stdio.h>

int main()
{
    int a, b, c, x, r;
    float r1, r2, root;
    printf("GENERAL FORM OF EQUATION IS: ax^2 + bx +c !\n\n");
    printf("enter the value of a from the given equation : ");
    scanf("%d", &a);
    printf("enter the value of b from the given equation : ");
    scanf("%d", &b);
    printf("enter the value of c from the given equation :");
    scanf("%d", &c);
    printf("YOUR EQUATION IS : %dx^2 %dx %d \n", a, b, c);
    r = ((b * b) - (4 * a * c));
    root = sqrt(r);
    r1 = (-b + root) / (2 * a);
    r2 = (-b - root) / (2 * a);
    printf(" %f  %f", r1, r2);

    return 0;
}
