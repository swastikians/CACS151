#include<stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        // terminate the loop if current iteration holds number 7
        if (i == 7) break;
        printf("%d\n");
    }

    return 0;
}