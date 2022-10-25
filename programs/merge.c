#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1 = fopen("file1.txt", "r");
    FILE *fp2 = fopen("file2.txt", "r");
    FILE *fp3 = fopen("file3.txt", "w");
    char c;
    while ((c = fgetc(fp1) != EOF))
    {
        fputc(c, fp3);
    }
    while ((c = fgetc(fp2) != EOF))
    {
        fputc(c, fp3);
    }
    printf("merged file is: ");
    fp3 = fopen("file3.txt" , "rb");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
return 0;
}