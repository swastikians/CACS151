#include <stdio.h>

const int MAX = 3;

int main() {
    int i, *ptr;

    int var[] = {10, 100, 200};
    ptr = var;

    for (i = 0; i < MAX; i++) {
        printf("\nAddress of var[%d] = %u\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}