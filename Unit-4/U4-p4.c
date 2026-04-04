#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("file.txt", "a");

    printf("Enter text: ");
    gets(str);

    fprintf(fp, "%s", str);

    fclose(fp);
    return 0;
}
