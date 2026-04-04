#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("input.txt", "r");

    fseek(fp, 0, SEEK_END);
    printf("File Size: %ld bytes", ftell(fp));

    fclose(fp);
}
