// Convert string to lowercase.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
        str[i]=tolower(str[i]);

    printf("%s",str);
}
