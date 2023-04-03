// program to find out largest number among three numbers given by the user

#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("\nEnter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else if (c >= a && c >= b) {
        max = c;
    } else {
        printf("\nCould not determine the largest number.\n");
        return 1;
    }

    printf("%d is the largest number among %d, %d and %d.\n", max, a, b, c);

    return 0;
}