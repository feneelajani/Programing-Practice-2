#include <stdio.h>

int main() {
    FILE *f1, *f2;
    int num, rev=0;

    f1 = fopen("num.txt", "w");
    scanf("%d", &num);
    fprintf(f1, "%d", num);
    fclose(f1);

    while(num != 0) {
        rev = rev*10 + num%10;
        num /= 10;
    }

    f2 = fopen("rev.txt", "w");
    fprintf(f2, "%d", rev);
    fclose(f2);
}
