#include<stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("\nThe given number is zero\n");
    } else if (n < 0) {
        printf("\nThe given number is negative\n");
    } else {
        printf("\nThe given number is positive\n");
    }

    return 0;
}