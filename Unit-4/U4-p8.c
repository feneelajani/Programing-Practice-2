#include <stdio.h>

struct emp {
    int code;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct emp e;

    fp = fopen("emp.dat", "wb");

    for(int i=0;i<2;i++) {
        scanf("%d %s %f", &e.code, e.name, &e.salary);
        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);

    fp = fopen("emp.dat", "rb");

    while(fread(&e, sizeof(e), 1, fp)) {
        printf("%d %s %.2f\n", e.code, e.name, e.salary);
    }

    fclose(fp);
    return 0;
}
