//Enter your name and print it vertically.

#include<stdio.h>
int main()
{
	char name[50];
	int i;

	printf("Enter your name:-");
	scanf("%s",name);

	for(i=0; name[i]!='\0'; i++)
	{
		printf("%c\n",name[i]);
	}

	return 0;
}


