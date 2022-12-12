#include<stdio.h>

int main() {
    float PI = 22 / 7, r, h;

    printf("Enter the value of r: ");
    scanf("%f", &r);
    printf("Enter the value of r: ");
    scanf("%f", &h);

    float area = (2 * PI * r * h) + (2 * PI * r * r);

    printf("\nThe area is %.2f\n", area);

    return 0;
}
