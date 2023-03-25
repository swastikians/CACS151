#include<stdio.h>

int main() {
    int i, j, row, col, sw = 0;

    printf("\nEnter the number of rows: ");
    scanf("%d", &row);
    printf("\nEnter the number of columns: ");
    scanf("%d", &col);

    int a[row][col], b[row][col], c[row][col];

    input: {
        if (sw == 0) {
            printf("\nFirst Matrix\n");
        } else {
            printf("\nSecond Matrix\n");
        }

        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                printf("\nEnter value for (Row %d, Col %d): ", i, j);
                scanf("%d", sw == 0 ? &a[i][j] : &b[i][j]);
            }
        }
    }

    if (sw++ < 1) {
        goto input;
    }

    for (i = 0; i < row; i++) {
        int temp = 0;

        for (j = 0; j < col; j++) {
            printf(" %d ", temp += a[i][j] * b[j][i]);
            /*
                1 2    -> 1 2
                3 4    -> 3 4
            */
        }

        printf("\n");
    }

    return 0;

    printf("\nMultiplication of two matrices:\n");

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (j == 0) {
                printf("|");
            }

            printf(" %d ", c[i][j]);

            if (j == col - 1) {
                printf("|");
            }
        }

        printf("\n");
    }

    return 0;
}
