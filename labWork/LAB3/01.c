// program to find factorial of a number using recursive function

#include<stdio.h>

int factorial(int n);

int main() {
    int n, fac;
    
    printf("\nEnter a number: ");
    scanf("%d", &n);

    fac = factorial(n);

    printf("\nThe factorial of %d is %d.\n", n, fac);

    return 0;
}

int factorial(int n) {
    if (n < 1) return 1;

    return n * factorial(n - 1);
}