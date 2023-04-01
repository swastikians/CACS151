// program to find smallest and largest number in a list of N numbers using DMA

#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, j, temp, count, *list, largest, smallest;
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &count);

    list = malloc(count * sizeof(int));

    if (list == NULL) {
        printf("\nFailed to allocate memory\n");
        return 1;
    }

    // take input
    for (i = 0; i < count; i++) {
        printf("\nEnter no. %d element: ", i);
        scanf("%d", list + i);
    }

    // get largest and smallest
    for (i = 0; i < count; i++) {
        largest = smallest = *(list + i);

        for (j = 0; j <= i; j++) {
            if (largest < *(list + j)) {
                largest = *(list + j);
            }

            if (smallest > *(list + j)) {
                smallest = *(list + j);
            }
        }
    }

    free(list);
    printf("\nLargest: %d | Smallest: %d\n", largest, smallest);

    return 0;
}
