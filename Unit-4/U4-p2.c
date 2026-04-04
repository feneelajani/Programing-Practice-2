#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int chars=0, spaces=0, tabs=0, lines=0;

    fp = fopen("input.txt", "r");

    while((ch = fgetc(fp)) != EOF) {
        chars++;
        if(ch == ' ') spaces++;
        if(ch == '\t') tabs++;
        if(ch == '\n') lines++;
    }

    fclose(fp);

    printf("Characters: %d\nSpaces: %d\nTabs: %d\nLines: %d\n", chars, spaces, tabs, lines);
    return 0;
}
