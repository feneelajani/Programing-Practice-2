//Enter N elements and find maximum and minimum value.

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the value for N:-");
	scanf("%d",&n);

	int arr[n];

	printf("Enter the %d element:-",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	int max=arr[0], min=arr[0];

	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}

	printf("\nMaximum value is:-%d",max);
	printf("\nMinimum value is:-%d",min);

	return 0;
}

