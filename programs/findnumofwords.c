#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("findnumofwords.txt", "r");
    char ch;
    ch = fgetc(fptr);
    int count = 0;
    for (char i = 0; ch != EOF; i++)
    {

        ch = fgetc(fptr);
        if (ch == 'a')
        {
            count++;
        }
    }
    printf("\nthe number of character present in the doument is %d", count);
    return count;

    fclose(fptr);
    return 0;
}
