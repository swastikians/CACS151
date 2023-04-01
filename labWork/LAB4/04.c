// program to check if the given number is armstrong or not using user defined function

#include<stdio.h>

int digit_count(int n) {
    int count = 0;

    while(n > 0) {
        count++;
        n /= 10;
    }

    return count;
}

int power(int n, int times) {
    int i, res = 1;

    for (i = 0; i < times; i++, res *= n);

    return res;
}

int armstrong(int n) {
    int count = digit_count(n), temp = n, current, sum = 0;

    while (temp > 0) {
        current = temp % 10;
        sum += power(current, count);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int num, is_armstrong;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    is_armstrong = armstrong(num);

    if (is_armstrong) {
        printf("\n%d is an armstrong number.\n", num);
    } else {
        printf("\n%d is not an armstrong number.\n", num);
    }

    return 0;
}
