/*
Ternary Operation: condition ? when true : when false
*/

#include<stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    n % 2 == 0 ? printf("\nThe number %d is even\n", n) : printf("\nThe number %d is odd\n", n);
    
    return 0;
}