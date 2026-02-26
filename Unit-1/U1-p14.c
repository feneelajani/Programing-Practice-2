//Enter a string and print it in reverse order with using string function and without string function.

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100], str2[100];
	int i,length;

	printf("Enter a string1:- ");
	gets(str1);
	printf("Enter a string2:- ");
	gets(str2);

	// Without using string function
	printf("\nReverse of string1 without using function:- ");
	for(i=0; str1[i] != '\0'; i++)
	{
		length = i;
	}

	for(i=length; i>=0; i--)
	{
		printf("%c",str1[i]);
	}

	// Using string function
	length = strlen(str2);

	printf("\nReverse of string2 using string function:- ");
	for(i=length-1; i>=0; i--)
	{
		printf("%c",str2[i]);
	}

	return 0;
}

