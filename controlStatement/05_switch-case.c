#include <stdio.h>

int main() {
    int number;
    printf("Enter a number 10 or 20 or 30: ");
    scanf("%d", &number);

    switch (number) {
        case 10:
            printf("The number is equal to 10");
            break;
        case 20:
            printf("The number is equal to 20");
            break;
        case 30:
            printf("The number is equal to 30");
            break;
    }

    return 0;
}

