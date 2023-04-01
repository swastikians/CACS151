// sum and average of two integer numbers using user defined function

#include<stdio.h>

int sum(int a, int b);
int average(int a, int b);

int main() {
    int a = 45, b = 67;

    printf("\nSum: %d | Average: %d\n", sum(a, b), average(a, b));
    
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int average(int a, int b) {
    return sum(a, b) / 2;
}
