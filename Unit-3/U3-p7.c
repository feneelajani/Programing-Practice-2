// Add two matrices using array of pointers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j;

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    int *a[r], *b[r], *sum[r];

    for(i=0;i<r;i++)
    {
        a[i]=(int*)malloc(c*sizeof(int));
        b[i]=(int*)malloc(c*sizeof(int));
        sum[i]=(int*)malloc(c*sizeof(int));
    }

    printf("Enter matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter matrix B:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j]=a[i][j]+b[i][j];

    printf("Sum matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",sum[i][j]);
        printf("\n");
    }
}
