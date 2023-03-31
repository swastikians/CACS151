#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "example string";

    // strlen returns the length of the given string
    int len = strlen(str);

    printf("\nThe length of %s is %d.\n", str, len);

    return 0;
}
