#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *f;
    char ch;
    f = fopen("file.txt", "r");
    if (f == NULL)
    {
        printf("FILE DOESENT EXIST");
    }\
    else
    {
        while (ch != EOF)
        {
            ch = toupper(ch);
            fputc(ch, f);
        }
        printf("file copied succefully");
    }
    fclose(f);
    return 0;
}