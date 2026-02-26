//Enter a string and find out how many spaces and vowels in the string.

#include<stdio.h>
int main()
{
	char str[100];
	int i,spaces=0,vowels=0;

	printf("Enter a string:-");
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
			spaces++;

		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		   str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		   vowels++;
	}

	printf("Total spaces:-%d",spaces);
	printf("\nTotal vowels:-%d",vowels);

	return 0;
}

