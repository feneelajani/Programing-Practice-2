//Compare two strings and find out they are same or not.

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];

	printf("Enter string1:-");
	gets(str1);

	printf("Enter string2:-");
	gets(str2);

	if(strcmp(str1,str2)==0)
		printf("Strings are same");
	else
		printf("Strings are not same");

	return 0;
}

