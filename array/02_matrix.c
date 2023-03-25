#include<stdio.h>

int main() {
    int i, j, row, col;

    printf("\nEnter the number of rows: ");
    scanf("%d", &row);
    printf("\nEnter the number of columns: ");
    scanf("%d", &col);

    int arr[row][col];

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("\nEnter value for (Row %d, Col %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe matrix visualization:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (j == 0) {
                printf("|");
            }

            printf(" %d ", arr[i][j]);

            if (j == col - 1) {
                printf("|");
            }
        }

        printf("\n");
    }

    return 0;
}
