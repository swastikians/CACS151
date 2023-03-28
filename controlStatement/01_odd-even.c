#include<stdio.h>

int main() {
    int n, a;

    printf("Enter a number: ");
    scanf("%d", &n);

    a = n % 2 == 0;

    if (a == 0) {
        printf("\n%d is odd number\n", n);
    } else {
        printf("\n%d is even number\n", n);
    }

    return 0;
}