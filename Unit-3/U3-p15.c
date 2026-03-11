// Copy a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[50],b[50];

    printf("Enter string: ");
    scanf("%s",a);

    strcpy(b,a);

    printf("Copied string = %s",b);
}
