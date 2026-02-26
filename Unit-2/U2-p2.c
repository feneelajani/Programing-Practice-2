// write program to modify data.

#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[20];
    char department[40];
    int yearofjoining;
    float score;
};

int main()
{
    struct student s[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter the details of student %d\n:",i+1);

            printf("Enter the roll no:");
            scanf("%d",&s[i].rollno);

            printf("Enter the name:");
            scanf("%s",s[i].name);

            printf("Enter the department:");
            scanf("%s",s[i].department);

            printf("Enter the year of joining:");
            scanf("%d",&s[i].yearofjoining);

            printf("Enter the score:");
            scanf("%f",&s[i].score);
    }

    printf("Student detail:");

    printf("Roll no:%d\n",s[i].rollno);
    printf("Name:%s\n",s[i].name);
    printf("Department:%s\n",s[i].department);
    printf("Year of joining:%d\n",s[i].yearofjoining);
    printf("score:%f\n",s[i].score);

    return 0;
}

