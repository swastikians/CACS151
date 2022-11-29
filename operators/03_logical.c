/*
Logical Operators
AND: &&
OR: ||
NOT: !
*/

#include<stdio.h>

int main() {
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("a == b && c > b: %d\n", result);

    result = (a == b) && (c < b);
    printf("a == b && c < b: %d\n", result);

    result = (a == b) || (c > b);
    printf("a == b || c > b: %d\n", result);

    result = (a != b) || (c < b);
    printf("a != b || c < b: %d\n", result);

    result = !(a != b);
    printf("!(a != b): %d\n", result);

    result = !(a == b);
    printf("!(a == b): %d\n", result);

    return 0;
}