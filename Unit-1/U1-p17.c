//Check the string is palindrome or not.

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100], rev[100];
	int i, j = 0, len;

	printf("Enter a string:- ");
	gets(str);

	len = strlen(str);

	// Reverse string
	for(i = len - 1; i >= 0; i--)
	{
		rev[j] = str[i];
		j++;
	}
	rev[j] = '\0';

	if(strcmp(str, rev) == 0)
		printf("String is palindrome");
	else
		printf("String is not palindrome");

	return 0;
}

