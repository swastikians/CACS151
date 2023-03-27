#include<stdio.h>

int main() {
    int a, b, c;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if ((a >= b && a >= c) || (b >= a && b >= c) || (c >= a && c >= b)) {
        int max = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
        printf("%d is the maximum number\n", max);
    }

    return 0;
}