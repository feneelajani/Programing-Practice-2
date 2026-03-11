// Compare two strings.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[50],b[50];

    printf("Enter first string: ");
    scanf("%s",a);

    printf("Enter second string: ");
    scanf("%s",b);

    if(strcmp(a,b)==0)
        printf("Strings are same");
    else
        printf("Strings are different");
}
