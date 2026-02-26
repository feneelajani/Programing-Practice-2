//Enter N elements and find how many are positive, negative, even and odd.

#include<stdio.h>
int main()
{
	int n,i,pos=0,neg=0,even=0,odd=0;
	printf("Enter the value for N:-");
	scanf("%d",&n);

	int arr[n];

	printf("Enter the %d element:-",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

		if(arr[i]>=0)
		{
			pos++;
		}
		else
		{
			neg++;
		}

		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	printf("\nPositive numbers:-%d",pos);
	printf("\nNegative numbers:-%d",neg);
	printf("\nEven numbers:-%d",even);
	printf("\nOdd numbers:-%d",odd);

	return 0;
}

