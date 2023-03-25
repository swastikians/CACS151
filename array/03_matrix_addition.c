#include<stdio.h>

int main() {
    int i, j, sw = 0, row, col;

    printf("\nEnter the number of rows: ");
    scanf("%d", &row);
    printf("\nEnter the number of columns: ");
    scanf("%d", &col);

    int arr[row][col], arr2[row][col];

    input: {
        if (sw == 0) {
            printf("\nFirst Matrix\n");
        } else {
            printf("\nSecond Matrix\n");
        }

        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                printf("\nEnter value for (Row %d, Col %d): ", i, j);
                scanf("%d", sw == 0 ? &arr[i][j] : &arr2[i][j]);
            }
        }
    }

    if (sw++ < 1) {
        goto input;
    }

    printf("\nSum of two matrices:\n");

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (j == 0) {
                printf("|");
            }

            printf(" %d ", arr[i][j] + arr2[i][j]);

            if (j == col - 1) {
                printf("|");
            }
        }

        printf("\n");
    }

    return 0;
}
