/* WAP in C to develop a calculator which performs the following operations:
Addition, Subtraction, Multiplication, and Division using switch case */

#include<stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("\nEnter operation: ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("\n%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("\n%d x %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("\n%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        default:
            printf("\nInvalid/Unknown operation!\n");
            break;
    }

    return 0;
}