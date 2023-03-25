// WAP in C to check if the given number is prime or not

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number to generate upto: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("\nThe number is invalid.\n");
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (i != 2 && n % i == 0) {
            continue;
        } else {
            printf("\n%d", i);
        }
    }

    printf("\n");

    return 0;
}