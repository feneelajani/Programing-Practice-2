// Function to Print Names with Score > 5.0

#include <stdio.h>

struct student {
    char name[20];
    float score;
};

void printAboveFive(struct student s[], int n) {
    int i;
    printf("\nStudents with score > 5.0:\n");
    for(i=0; i<n; i++) {
        if(s[i].score > 5.0)
            printf("%s\n", s[i].name);
    }
}

int main() {
    struct student s[5];
    int i;

    for(i=0; i<5; i++) {
        printf("\nEnter Name and Score:\n");
        scanf(" %[^\n]", s[i].name);
        scanf("%f", &s[i].score);
    }

    printAboveFive(s, 5);

    return 0;
}
