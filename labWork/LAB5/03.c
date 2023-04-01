// program to find squares using calloc

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, *list, i;

    printf("\nEnter total number of elements: ");
    scanf("%d", &n);

    list = calloc(n, sizeof(int));

    if (list == NULL) {
        printf("\nFailed to allocate memory\n");
        return 1;
    }

    // take input
    for (i = 0; i < n; i++) {
        printf("\nEnter no. %d element: ", i);
        scanf("%d", list + i);
    }

    // square each elements
    for (i = 0; i < n; i++) {
        *(list + i) *= *(list + i);
    }

    // print
    for (i = 0; i < n; i++) {
        printf("%d\n", *(list + i));
    }

    free(list);

    return 0;
}
