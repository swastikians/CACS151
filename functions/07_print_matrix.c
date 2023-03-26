#include <stdio.h>

int printMatrix(int arr[3][3], int row, int col);

int main() {
    int row = 3, col = 3, arr[row][col], i, j;

    printf("Enter the matrix values: ");

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("\nEnter a number: ");
            scanf("%d", &arr[i][j]);
        }
    }
    

    printMatrix(arr, row, col);

    return 0;
}

int printMatrix(int arr[3][3], int row, int col) {
    int sum = 0, i, j;

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf(" %d ", arr[i][j]);
        }

        printf("\n");
    }

    return sum;
}