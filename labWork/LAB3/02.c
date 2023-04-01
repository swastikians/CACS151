// program to sum all the elements in an array

#include<stdio.h>

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 }, sum = 0, i;

    int total_elements = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < total_elements; i++) {
        sum += arr[i];
    }

    printf("\nThe sum is %d.\n", sum);

    return 0;
}
