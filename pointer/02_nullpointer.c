#include<stdio.h>

int main() {
    int a = 1;
    int *ptr = NULL;
    // initializing ptr2 since uninitialized pointer can cause segmentation fault
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