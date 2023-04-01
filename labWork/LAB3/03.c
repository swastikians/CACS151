// program to sort an array in ascending order

#include<stdio.h>

int main() {
    int arr[6] = { 3, 1, 4, 2, 5, 0 }, i, j, temp;
    int len = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < len; i++) {
        for (j = 0; j <= i; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\nSorted array:\n");

    for (i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
