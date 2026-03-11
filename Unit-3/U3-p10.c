// Concatenate two strings.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[50], b[50];

    printf("Enter first string: ");
    scanf("%s",a);

    printf("Enter second string: ");
    scanf("%s",b);

    strcat(a,b);

    printf("Concatenated string = %s",a);
}
