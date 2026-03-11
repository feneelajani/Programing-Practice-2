//Sum and average using dynamic array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *a = (int*)malloc(n * sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / n;

    printf("Sum = %.2f\nAverage = %.2f", sum, avg);

    free(a);
    return 0;
}
