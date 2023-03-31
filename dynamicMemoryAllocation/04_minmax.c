#include<stdio.h>
#include<stdlib.h>

int main() {
    int *list, i, j, len, min, max;

    printf("\nEnter the length: ");
    scanf("%d", &len);

    list = malloc(sizeof(int) * len);

    if (list == NULL) {
        printf("\nFailed to allocate memory!\n");
        return 1;
    }

    for (i = 0; i < len; i++) {
        printf("\nEnter value for %d index: ", i);
        scanf("%d", list + i);
    }

    printf("\nFinding min-max\n");

    for (i = 0; i < len; i++) {
        min = max = *(list + i);

        for (j = 0; j <= i; j++) {
            if (min > *(list + j)) {
                min = *(list + j);
            }
            
            if (max < *(list + j)) {
                max = *(list + j);
            }
        }
    }
    
    printf("\nMinimum: %d\tMaximum: %d\n", min, max);

    free(list);
    
    return 0;
}
