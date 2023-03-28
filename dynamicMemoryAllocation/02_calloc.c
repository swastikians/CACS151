#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("\nFailed to allocate memory!\n");
        return 1;
    }

    printf("\nEnter the elements of array: \n");

    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("\nSum = %d\n", sum);
    free(ptr);

    printf("\n%d\n", *ptr);

    return 0;
}
