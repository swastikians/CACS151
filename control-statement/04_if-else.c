/* write a program in c to calculate grade of the students according to their
specified marks by taking marks as the input of 5 subjects */

#include <stdio.h>

/*
A+ :: 90% above
A  :: 80% above and below A+
B+ :: 70% above and below A
B  :: 60% above and below B+
C+ :: 50% above and below B
C  :: 40% above and below C+
NG :: below C
*/

#define A_PLUS 90
#define A 80
#define B_PLUS 70
#define B 60
#define C_PLUS 50
#define C 40

int main() {
    float s1, s2, s3, s4, s5;

    // inputs
    printf("\nEnter the mark of the first subject: ");
    scanf("%f", &s1);

    printf("\nEnter the mark of the second subject: ");
    scanf("%f", &s2);

    printf("\nEnter the mark of the third subject: ");
    scanf("%f", &s3);

    printf("\nEnter the mark of the fourth subject: ");
    scanf("%f", &s4);

    printf("\nEnter the mark of the fifth subject: ");
    scanf("%f", &s5);

    // grade calculation
    float total = s1 + s2 + s3 + s4 + s5;

    float pr = total / 5;

    if (pr > 100) {
        printf("\nPercentage is above 100, please try again!\n");
    } else if (pr >= A_PLUS && pr <= 100) {
        printf("\nPercentage: %.2f\tFinal Grade: A+\n", pr);
    } else if (pr >= A && pr < A_PLUS) {
        printf("\nPercentage: %.2f\tFinal Grade: A\n", pr);
    } else if (pr >= B_PLUS && pr < A) {
        printf("\nPercentage: %.2f\tFinal Grade: B+\n", pr);
    } else if (pr >= B && pr < B_PLUS) {
        printf("\nPercentage: %.2f\tFinal Grade: B\n", pr);
    } else if (pr >= C_PLUS && pr < B) {
        printf("\nPercentage: %.2f\tFinal Grade: C+\n", pr);
    } else if (pr >= C && pr < C_PLUS) {
        printf("\nPercentage: %.2f\tFinal Grade: C\n", pr);
    } else {
        printf("\nPercentage: %.2f\tFinal Grade: NG\n", pr);
    }

    return 0;
}