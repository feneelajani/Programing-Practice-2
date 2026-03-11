// Maximum minimum using pointer to function.

#include <stdio.h>

void maxmin(int a, int b, int *max, int *min)
{
    if(a > b)
    {
        *max = a;
        *min = b;
    }
    else
    {
        *max = b;
        *min = a;
    }
}

int main()
{
    int a, b, max, min;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    maxmin(a, b, &max, &min);

    printf("Max = %d\nMin = %d", max, min);

    return 0;
}
