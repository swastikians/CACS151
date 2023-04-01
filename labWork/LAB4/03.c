// program to sum all the elements in an array using user defined function

#include <stdio.h>

int sum_array(int arr[], int count) {
    int sum = 0, i;

    for (i = 0; i < count; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5}, sum;
    int count = sizeof(arr) / sizeof(arr[0]);
    
    sum = sum_array(arr, count);

    printf("\nThe sum is %d.\n", sum);

    return 0;
}
