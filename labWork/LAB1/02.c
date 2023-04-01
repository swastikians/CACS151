// program to calculate area of cylinder

#include<stdio.h>

#define PI 3.1415

int main() {
    int radius, height, area;

    printf("\nEnter the radius: ");
    scanf("%d", &radius);

    printf("\nEnter the height: ");
    scanf("%d", &height);

    area = 2 * PI * radius * (radius + height);

    printf("\nArea = %d\n", area);

    return 0;
}
