// Sort by Name

#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {
    struct student s[5], temp;
    int i, j;

    for(i=0; i<5; i++) {
        printf("\nEnter Name of student %d: ", i+1);
        scanf(" %[^\n]", s[i].name);
    }

    for(i=0; i<4; i++) {
        for(j=i+1; j<5; j++) {
            if(strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted Names:\n");
    for(i=0; i<5; i++)
        printf("%s\n", s[i].name);

    return 0;
}
