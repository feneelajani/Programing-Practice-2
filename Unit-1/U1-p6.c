//Enter N elements and arrange them in reverse order.

#include <stdio.h>

int main()
{
    int n,i;

    printf("Enter the value for N :-");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the %d element :-",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Originl array :-");
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }

    //logic behind print reverse order of array
    printf("\nReverse order of array :-");
    for(i=n-1;i>=0;i--)
    {
        printf(" %d",arr[i]);
    }

    return 0;
}

