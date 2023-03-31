#include<stdio.h>
#include<string.h>

int main() {
    char source[] = "test";
    char destination[14];

    // strcpy can be used to copy the string from src to dest
    strcpy(destination, source);

    printf("\nSource: %s | Destination: %s\n", source, destination);

    return 0;
}
