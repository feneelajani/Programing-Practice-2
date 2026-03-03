// Difference Between Structure and Union

#include <stdio.h>

union data {
    int i;
    float f;
    char str[20];
};

struct data2 {
    int i;
    float f;
    char str[20];
};

int main() {
    union data u;
    struct data2 s;

    printf("Size of Union: %lu\n", sizeof(u));
    printf("Size of Structure: %lu\n", sizeof(s));

    return 0;
}
