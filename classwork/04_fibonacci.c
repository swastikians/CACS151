#include<stdio.h>

int main() {
    int i, n, a = 0, b = 1, c = 0;

    printf("\nEnter the total amount of numbers to be generated: ");
    scanf("%d", &n);

    printf("\nFibonacci numbers from 1 to %d\n", n);
    
    for (i = 0; i < n; i++) {
        printf("%d\t", c);

        c = a;
        a = b;
        b = b + c;
    }

    printf("\n");

    return 0;
}