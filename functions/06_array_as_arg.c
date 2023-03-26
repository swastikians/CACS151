#include <stdio.h>

int sumArray(int arr[], int total);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof arr / sizeof arr[0];

    int sum = sumArray(arr, len);

    printf("Sum is : %d\n", sum);

    return 0;
}

int sumArray(int arr[], int total) {
    int sum = 0, i;

    for (i = 0; i < total; i++) {
        sum += arr[i];
    }

    return sum;
}