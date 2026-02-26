//Enter N elements and  find total and average of them.

#include<stdio.h>

int main()
{
    int n,i,sum=0;
    float avg ;

    printf("enter value of N");
    scanf("%d",&n);
    int arr[n];

    printf("enter %d element",n);

     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);

     }

     for(i=0;i<n;i++)
     {
         printf(" %d",arr[i]);
     }
     //sum  of array

     for(i=0;i<n;i++)
     {
         sum+=1;
     }
     avg=sum/n;

     printf("sum of array %d",sum);
     printf(" average of array %f",avg);

     return 0;

}

