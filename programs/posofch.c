#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], c;
    int f, i, l = 0;
    printf("enter a string:");
    gets(str);
    l = strlen(str);
    printf("\nenter a character to find its position:");
    scanf("%c", &c);
    for (i = 0; i < l; i++)
    {
        if (str[i] == c)
        {
            printf("character position:\n%d", i + 1);
            f = 1;
        }
    }
    if (f == 0)
    {
        printf("\ncharacter not found");
    }
}