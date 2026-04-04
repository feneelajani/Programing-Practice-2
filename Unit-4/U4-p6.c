#include <stdio.h>

int main() {
    FILE *f, *odd, *even;
    int num;

    f = fopen("DATA.txt", "w");
    for(int i=1;i<=10;i++)
        fprintf(f, "%d ", i);
    fclose(f);

    f = fopen("DATA.txt", "r");
    odd = fopen("ODD.txt", "w");
    even = fopen("EVEN.txt", "w");

    while(fscanf(f, "%d", &num) != EOF) {
        if(num % 2 == 0)
            fprintf(even, "%d ", num);
        else
            fprintf(odd, "%d ", num);
    }

    fclose(f);
    fclose(odd);
    fclose(even);
    return 0;
}
