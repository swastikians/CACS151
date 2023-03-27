#include<stdio.h>

int main() {
    int *ptr, c;

    c = 5;
    ptr = &c;

    printf("\nThe address of variable c is %u", &c);
    printf("\nThe value of ptr or address pointed by ptr is %u", ptr);
    printf("\nThe value of c is %d", c);
    printf("\nThe value of ptr is %u", *ptr);
    printf("\nThe address of ptr is %u\n", &ptr);

    return 0;
}