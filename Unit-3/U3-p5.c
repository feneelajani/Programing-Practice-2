// Sum of prime numbers using dynamic array.

#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    int i;
    if(n < 2) return 0;

    for(i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;

    return 1;
}

int main()
{
    int n,i,sum=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int *a=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        if(isPrime(a[i]))
            sum+=a[i];

    printf("Sum of prime numbers = %d",sum);

    free(a);
}
