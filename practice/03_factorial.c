// WAP in C to calculate factorial of a given number

#include<stdio.h>

int main() {
    int n, i, o = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        o *= i;
    }

    printf("\nFactorial of %d is %d\n", n, o);

    return 0;
}


