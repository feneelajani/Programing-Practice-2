// Sort by Score in descending order

#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float score;
};

int main() {
    struct student s[5], temp;
    int i, j;

    for(i=0; i<5; i++) {
        printf("\nEnter Name and Score of student %d:\n", i+1);
        scanf(" %[^\n]", s[i].name);
        scanf("%f", &s[i].score);
    }

    for(i=0; i<4; i++) {
        for(j=i+1; j<5; j++) {
            if(s[i].score < s[j].score) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted by Score (Descending):\n");
    for(i=0; i<5; i++)
        printf("%s - %.2f\n", s[i].name, s[i].score);

    return 0;
}
