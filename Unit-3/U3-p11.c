// Convert string to uppercase.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
        str[i]=toupper(str[i]);

    printf("%s",str);
}
