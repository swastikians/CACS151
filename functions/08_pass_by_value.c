#include<stdio.h>

void display(int n) {
    printf("\n[display()] Before: %d\n", n);
    n += 500;
    printf("\n[display()] After: %d\n", n);
}

int main() {
    int n = 372;

    printf("\n[main()] Before: %d\n", n);
    display(n);
    printf("\n[main()] After: %d\n", n);
}