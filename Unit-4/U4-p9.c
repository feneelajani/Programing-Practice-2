#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int upper=0, lower=0, digits=0, vowels=0, special=0;

    fp = fopen("input.txt", "r");

    while((ch=fgetc(fp))!=EOF) {
        if(isupper(ch)) upper++;
        else if(islower(ch)) lower++;
        else if(isdigit(ch)) digits++;
        else special++;

        if(strchr("AEIOUaeiou", ch)) vowels++;
    }

    fclose(fp);

    printf("Upper:%d Lower:%d Digits:%d Vowels:%d Special:%d",
            upper, lower, digits, vowels, special);
}
