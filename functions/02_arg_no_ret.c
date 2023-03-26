// function with arguments and no return value
#include<stdio.h>

void compare(int, int);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    compare(a, b);

    printf("\n");

    return 0;
}

void compare(int a, int b) {
    if (a > b) {
        printf("%d is greater than %d", a, b);
    } else if (b > a) {
        printf("%d is greater than %d", b, a);
    } else {
        printf("%d is equal to %d", a, b);
    }
}