#include<stdio.h>

int main() {
    int a = 1;
    int *ptr = NULL;
    int *ptr2 = &a;

    if (ptr != NULL) {
        printf("\nValue of ptr is %d\n", *ptr);
    } else {
        printf("\nInvalid pointer\n");
    }

    if (ptr2 != NULL) {
        printf("value of ptr2 is %d\n", *ptr2);
    } else {
        printf("\nInvalid pointer 2\n");
    }

    return 0;
}