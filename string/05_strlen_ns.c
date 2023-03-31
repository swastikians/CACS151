// Getting string length without using standard lib "string.h"

#include<stdio.h>

int main() {
    char str[] = "example string", len = 0;

    // iterate over str until a null character is found
    while(str[len] != '\0') {
        len++;
    }

    printf("\nThe length of %s is %d.\n", str, len);

    return 0;
}
