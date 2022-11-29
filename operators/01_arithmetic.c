/* arithmetic operators */
#include<stdio.h>

int main() {
    int a = 10, b = 30;
    int add = a + b;
    int sub = b - a;
    int mul = a * b;
    int div = b / a;
    int mod = b % a;

    printf("Addition: %d\n\
    Subtraction: %d\n\
    Multiplication: %d\n\
    Division: %d\n\
    Modulus: %d\n", add, sub, mul, div, mod);

    return 0;
}