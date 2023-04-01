// program to swap two numbers using pointer

#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 10;

    printf("\nBefore swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("\nAfter swap: a = %d, b = %d\n", a, b);

    return 0;
}
