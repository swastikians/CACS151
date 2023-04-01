// program to input marks of 5 subjects and find total, average and percentage using array

#include<stdio.h>

int main() {
    float marks[5] = {}, total = 0, average, percentage, fm = 100;
    int i, count = sizeof(marks) / sizeof(marks[0]);

    // input
    for (i = 0; i < count; i++) {
        printf("\nEnter obtained mark of subject %d: ", i);
        scanf("%f", &marks[i]);
    }

    // sum
    for (i = 0; i < count; i++) {
        total += marks[i];
    }

    average = total / count;

    percentage = (total / (count * fm)) * 100;

    printf("\nTotal: %.2f\nAverage: %.2f\nPercentage: %.2f\n", total, average, percentage);

    return 0;
}
