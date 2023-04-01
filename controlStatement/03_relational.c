// write a program in c whether the person is eligible to vote or not

#include <stdio.h>

int main()
{
    // person must be above 18 yrs old to cast vote
    // first we take the age of the person as input
    int age;

    // prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    /* if the given age is above 18, we show a message saying
    user is eligible to cast vote. We show a message saying user
    is not eligible otherwise. */

    if (age >= 18)
    {
        printf("\nYou are eligible to vote as you are %d years old :D\n", age);
    }
    else
    {
        printf("\nYou are not eligible to vote as you are %d years old :(\n", age);
    }

    return 0;
}

