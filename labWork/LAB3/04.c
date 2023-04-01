// program to print the largest and second largest number in an array

#include<stdio.h>

int main() {
    int arr[] = { 1, 8, 2, 3, 9, 4, 5 }, largest, second_largest, i, j, temp;
    int len = sizeof(arr) / sizeof(arr[0]);

    // sort the array in descending order
    for (i = 0; i < len; i++) {
        for (j = 0; j <= i; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    largest = arr[0];
    second_largest = arr[1];

    printf("\nLargest: %d | Second Largest: %d\n", largest, second_largest);

    return 0;
}
