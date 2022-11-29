#include<stdio.h>

int main() {
    float r, h, area;

    printf("Enter the value of radius: ");
    scanf("%f", &r);

    printf("Enter the value of height: ");
    scanf("%f", &h);

    area = 22/7 * r * r * h;

    printf("\nThe area of cylinder with height %f and radius %f is %f\n", h, r, area);

    return 0;
}
