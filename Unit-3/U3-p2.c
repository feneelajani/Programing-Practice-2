// Area of circle using pointer and function.

#include <stdio.h>

void area(float *r, float *a)
{
    *a = 3.14 * (*r) * (*r);
}

int main()
{
    float r, a;

    printf("Enter radius: ");
    scanf("%f", &r);

    area(&r, &a);

    printf("Area = %.2f", a);
    return 0;
}
