#include <stdio.h>
int main()
{
    // Declare variable to store year
    int year;

    // Input year from user
    printf("Input the year :");
    scanf("%d", &year);

    // Check leap year criteria and print result
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}