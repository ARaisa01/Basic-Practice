#include <stdio.h>
int main()
{
    // Declare variable to store age
    int age;

    // Input age from user
    printf("Input the age of the candidate :");
    scanf("%d", &age);

    // Check eligibility criteria and print result
    if (age >= 18)
    {
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else
    {
        printf("Sorry, you are not eligible for casting your vote.");
    }

    return 0;
}

