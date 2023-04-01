// program to find volume and surface area of sphere

#include<stdio.h>

#define PI 3.1415

int main() {
    int radius, volume, surface_area;

    printf("\nEnter the radius: ");
    scanf("%d", &radius);

    volume = (4 / 3) * PI * (radius * radius * radius);
    surface_area = 4 * PI * (radius * radius);

    printf("\nVolume = %d\tSurface Area = %d\n", volume, surface_area);

    return 0;
}
