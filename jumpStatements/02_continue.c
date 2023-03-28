#include<stdio.h>

int main() {
    int i;

    for (int i = 1; i <= 10; i++) {
        // skip even numbers
        if (i % 2 == 0) continue;
        printf("%d\n");
    }

    return 0;
}