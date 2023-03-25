#include<stdio.h>

int main() {
    int n, i, j;

    printf("\nEnter array range: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the array element: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array elements are:\n");

    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
