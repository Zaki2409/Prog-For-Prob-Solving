#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, n, c = 0;
    printf("enter the word: ");
    fgets(s, n, stdin);
    n = strlen(s);
    for (i; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
            c++;
    }
    if (c == i)
        printf("the word is not a palindrome");

    else
        printf("the word is palindrome");

    return 0;
} 