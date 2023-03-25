#include<stdio.h>

float sum(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main() {
    float a, b, result;
    char op;

    start:
    printf("\nEnter the expression: ");
    scanf("%f%c%f", &a, &c, &b);

    switch(op) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = sub(a, b);
            break;
        case '*':
            result = mul(a, b);
            break;
        case '/':
            result = div(a, b);
            break;
        default:
            printf("\nInvalid expression\n");
            goto start;
            break;
    }

    printf("\n%f %c %f = %2f\n", a, b, result);

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}
