// write program to design structure.

#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main()
{
    struct student s;


    printf("Enter the roll no:");
    scanf("%d",&s.rollno);

    printf("Enter the name:");
    scanf("%s",s.name);

    printf("Enter the department:");
    scanf("%s",s.department);

    printf("Enter the year of joining:");
    scanf("%d",&s.year_of_joining);

    printf("Enter the score:");
    scanf("%f",&s.score);

    printf("Student detail:");

    printf("Roll no:%d\n",s.rollno);
    printf("Name:%s\n",s.name);
    printf("Department:%s\n",s.department);
    printf("Year of joining:%d\n",s.year_of_joining);
    printf("score:%f\n",s.score);

    return 0;
}
