#include<stdio.h>

int main() {
    int n, c = 0, i, j, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    i = n;

    while(n > 0) {
        // count digits
        c++;
        j = n % 10;
        sum += j * j * j;
        n /= 10;
    }

    if (i == sum) {
        printf("\n%d is armstrong number\n", i);
    } else {
        printf("\n%d is not armstrong number\n", i);
    }

    return 0;
}