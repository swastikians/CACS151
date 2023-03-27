#include<stdio.h>

int main() {
    int v = 76;
    int *p1;
    int **p2;

    p1 = &v;
    p2 = &p1;

    printf("Value of v = %d\n", v);
    printf("Value of v using single pointer = %d\n", *p1);
    printf("Value of v using double pointer = %d\n", **p2);

    return 0;
}