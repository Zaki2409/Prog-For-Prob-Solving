#include <stdio.h>
#include <string.h>
int romantoarabic(char str[]);
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;

    return -1;
}
int romantoarabic(char str[])
{
    int result = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        int s1 = value(str[i]);
        if (i + 1 < strlen(str))
        {
            int s2 = value(str[i + 1]);

            if (s1 >= s2)
            {
                result = result + s1;
            }
            else
            {
                result = result + s2 - s1;
                i++;
            }
        }
        else
        {
            result = result + s1;
        }
    }
    return result;
}

int main()
{
    char str[10] = "I";
    printf("Integer form of Roman Numeral is %d", romantoarabic(str));
    return 0;
}