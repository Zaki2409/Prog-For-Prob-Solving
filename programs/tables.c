#include <stdio.h>
int main()
{
    int table;
    int table_row ,i  ;
    printf("which table :\n");
    scanf("%d", &table);
    printf("how many rows\n");
    scanf("%d", &table_row);
    printf("your number is %d and your row is %d\n", table, table_row);

    for (i = 1; i <= table_row; i++)
    {
        printf(" %d * %d = %d \n" , table , i , table * i);
    }
    
    return 0;
}


