#include<stdio.h>

void swap(int *a, int *b);

int main() {
    int a = 69, b = 79;

    printf("\nBefore Swap: a = %d | b = %d\n", a, b);

    swap(&a, &b);

    printf("\nAfter Swap: a = %d | b = %d\n", a, b);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}