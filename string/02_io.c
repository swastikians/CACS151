#include<stdio.h>

int main() {
    char name[50];

    puts("What is your name?");
    // the above line is equivalent to printf("What is your name?\n");

    // gets(name); could be used here but it is unsafe
    scanf("%s", name);

    printf("\nYour name is %s\n", name);

    return 0;
}
