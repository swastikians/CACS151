#include<stdio.h>
#include<stdlib.h>

int main() {
    int n1, n2, *ptr, i;

    printf("\nEnter the initial allocation size: ");
    scanf("%d", &n1);

    ptr = malloc(n1 * sizeof(int));

    printf("\nAddresses of initially allocated memory");
    
    for (i = 0; i < n1; i++) {
        printf("\nptr %d = %u\n", i, ptr + i);
    }

    printf("\nEnter the reallocation size: \n");
    scanf("%d", &n2);

    ptr = realloc(ptr, n2 * sizeof(int));

    printf("\nAddresses of reallocated memory");
    
    for (i = 0; i < n2; i++) {
        printf("\nptr %d = %u\n", i, ptr + i);
    }

    free(ptr);

    return 0;
}
