// FizzBuzz with recursion
#include<stdio.h>

void fizzBuzz(int, int);

int main() {
    int total;

    printf("Enter total: ");
    scanf("%d", &total);

    fizzBuzz(total, 1);

    return 0;
}

void fizzBuzz(int n, int current) {
    if (current > n) return;

    if (current % 3 == 0 && current % 5 == 0) {
        printf("FizzBuzz\n");
    } else if (current % 5 == 0) {
        printf("Buzz\n");
    } else if (current % 3 == 0) {
        printf("Fizz\n");
    } else {
        printf("%d\n", current);
    }

    return fizzBuzz(n, ++current);
}