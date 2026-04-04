#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("input.txt", "r");

    fseek(fp, 5, SEEK_SET);
    printf("Position: %ld\n", ftell(fp));

    rewind(fp);
    printf("After rewind: %ld\n", ftell(fp));

    fclose(fp);
}
