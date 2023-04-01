// program to swap two numbers without using third variable

#include <stdio.h>

int main() {
    int a = 4536, b = 7458;

    printf("\nBefore Swap:\nA: %d | B: %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swap:\nA: %d | B: %d\n", a, b);

    return 0;
}