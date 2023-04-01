#include <stdio.h>

int main() {
    int n, i, j;
    float x, sum = 1, fact = 1, power = 1;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        power *= x;
        fact *= i;
        sum += power / fact;
        printf("%.0f^%d/%d! + ", x, i, i);
    }

    printf("...\n");

    printf("Sum = %f", sum);

    return 0;
}
