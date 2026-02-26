//Copy the elements of one array into another.

#include <stdio.h>

int main()
{
    int n,i;

    printf("Enter the element N;-");
    scanf("%d",&n);

    int arr1[n],arr2[n];

    printf("Enter the %d element:-",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    //logic to copy one array to secound array.

     for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }


    printf("original array:-");
    for(i=0;i<n;i++)
    {
       printf("%d",arr1[i]);
    }

    printf("\nCopied array:-");
    for(i=0;i<n;i++)
    {
       printf("%d",arr2[i]);
    }

    return 0;
}

