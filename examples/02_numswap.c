// WAP in C to swap two variables without using third variable

#include<stdio.h>

int main() {
    int a = 2744, b = 3947;

    printf("\nBefore Swap:\nA: %d | B: %d\n", a, b);

    a = a + b; // a = (2 + 3) = 5
    b = a - b; // b = (5 - 3) = 2
    a = a - b; // a = (5 - 2) = 3

    printf("\nAfter Swap:\nA: %d | B: %d\n", a, b);

    return 0;
}