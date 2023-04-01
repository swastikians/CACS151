// program to implement the formula "Area = Height * Width"

#include<stdio.h>

int main() {
    int height, width, area;

    printf("\nEnter the height: ");
    scanf("%d", &height);

    printf("\nEnter the width: ");
    scanf("%d", &width);

    area = height * width;

    printf("\nArea = %d\n", area);

    return 0;
}
