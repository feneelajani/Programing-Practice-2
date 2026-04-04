#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char ch;

    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");

    while((ch=fgetc(f1))!=EOF) {
        if(ch=='a') ch='x';
        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);
}
