#include <stdio.h>

struct emp {
    int code;
    char name[50];
    float salary;
};

int main() {
    struct emp e[3], max;

    for(int i=0;i<3;i++) {
        scanf("%d %s %f", &e[i].code, e[i].name, &e[i].salary);
    }

    max = e[0];
    for(int i=1;i<3;i++) {
        if(e[i].salary > max.salary)
            max = e[i];
    }

    printf("Highest Salary: %s %.2f", max.name, max.salary);
    return 0;
}
