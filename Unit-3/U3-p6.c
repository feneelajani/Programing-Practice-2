// Sum of odd and even numbers using dynamic array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,even=0,odd=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int *a=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even+=a[i];
        else
            odd+=a[i];
    }

    printf("Even sum = %d\nOdd sum = %d",even,odd);

    free(a);
}
