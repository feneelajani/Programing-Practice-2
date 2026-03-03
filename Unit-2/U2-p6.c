// Student joined in 2019

#include <stdio.h>

struct student {
    char name[20];
    int year_of_joining;
};

void joined2019(struct student s[], int n) {
    int i;
    printf("\nStudents joined in 2019:\n");
    for(i=0; i<n; i++) {
        if(s[i].year_of_joining == 2019)
            printf("%s\n", s[i].name);
    }
}

int main() {
    struct student s[5];
    int i;

    for(i=0; i<5; i++) {
        printf("\nEnter Name and Year of Joining:\n");
        scanf(" %[^\n]", s[i].name);
        scanf("%d", &s[i].year_of_joining);
    }

    joined2019(s, 5);

    return 0;
}
