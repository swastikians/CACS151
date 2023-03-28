#include<stdio.h>

int main() {
    int *ptr;
    int arr[] = {1, 2, 3};
    ptr = &arr[0];

    printf("\nptr %u\n", ptr);
    printf("\narr %u\n", arr);

    return 0;
}