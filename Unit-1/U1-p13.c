//Enter a string and find out length of string with using string function and without string function.

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100], str2[100];
	int i,length1=0,length2;

	printf("Enter a string1:- ");
	gets(str1);
	printf("Enter a string2:- ");
	gets(str2);

	// Without using string function
	for(i=0; str1[i] != '\0'; i++)
	{
		length1++;
	}

	// Using string function
	length2 = strlen(str2);

	printf("Length of string1 without using function:- %d",length1);
	printf("\nLength of string2 using string function:- %d",length2);

	return 0;
}

