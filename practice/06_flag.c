#include<stdio.h>

int main() {
    int i, j;

    for (size_t i = 0; i < 20; i++) {
        for (size_t j = 0; j < i; j++) {
            printf(" * ");
        }
        printf("\n");
    }

    for (size_t i = 0; i < 10; i++) {
        printf(" *  *\n");
    }
    
    return 0;
}