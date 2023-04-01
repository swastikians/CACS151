// program to find out largest number among three numbers given by the user

#include <stdio.h>

int main() {
    int a, b, c;

    printf("\nEnter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a >= b && a >= c) || (b >= a && b >= c) || (c >= a && c >= b)) {
        int max = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
        printf("%d is the largest number among %d, %d and %d.\n", max, a, b, c);
    }

    return 0;
}