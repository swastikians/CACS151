// program to print table of an integer using user defined function

#include<stdio.h>

void print_table(int n, int i);

int main() {
    int n, i;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        print_table(n, i);
    }

    return 0;
}

void print_table(int n, int i) {
    printf("%d x %d = %d\n", n, i, n * i);
}
