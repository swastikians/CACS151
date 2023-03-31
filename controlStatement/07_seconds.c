#include <stdio.h>

int main() {
    int seconds, minutes, remainingSeconds;

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    minutes = seconds / 60;  // Number of minutes
    remainingSeconds = seconds % 60;  // Number of remaining seconds

    printf("%d seconds is %d minutes and %d seconds", seconds, minutes, remainingSeconds);

    return 0;
}
