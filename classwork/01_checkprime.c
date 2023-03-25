// WAP in C to check if the given number is prime or not

#include <stdio.h>

int main() {
    int n, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0 && n < 2) {
        printf("\nThe number is invalid to be counted as a prime number.\n");
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime) {
        printf("\n%d is a prime number.\n", n);
    } else {
        printf("\n%d is not a prime number.\n", n);
    }

    return 0;
}