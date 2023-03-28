#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printTable: {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    if (i <= 10) {
        goto printTable;
    }

    return 0;
}