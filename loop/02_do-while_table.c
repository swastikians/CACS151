/*
WAP to print the table of given number using do while loop
*/

#include <stdio.h>

int main() {
    int n, i = 1;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    return 0;
}