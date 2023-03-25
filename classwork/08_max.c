#include<stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if (a > b || b > a) {
        int max = a > b ? a : b;
        printf("\n%d is the maximum number between %d and %d\n", max, a, b);
    } else {
        printf("\nBoth of the given numbers are equal.\n");
    }

    return 0;
}