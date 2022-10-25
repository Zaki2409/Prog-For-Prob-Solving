#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main () {
char a[10];
char b[10];
char c[10];
int ch=0;
int l=0 , l1=0 , i;
puts("enter the first string:");
gets(a);
puts("enter the second string:");
gets(b);
printf("enter tthe number from which you want to add the sub string: ");
scanf("%d" , &ch);
l = strlen(a);
l1 = strlen(b);

for ( i = ch ; i < l ; i++)
{
    a [ i + l1 ] = a[i];
}
for ( i = 0; i < l1; i++)
{
    a[ch + i] = b[i];
}
b[l1 + 1] = '\0';
   printf("After inserting the string is %s", a);


    return 0;
}