#include <stdio.h>

int main()
{
    int m, n; // declare two integer variables
    printf("Enter the value of m: "); // prompt the user to enter the value of m
    scanf("%d", &m); // read the value of m from the user input
    if (m > 0) // if m is larger than 0
    {
        n = 1; // assign 1 to n
    }
    else if (m == 0) // if m is equal to 0
    {
        n = 0; // assign 0 to n
    }
    else // if m is less than 0
    {
        n = -1; // assign -1 to n
    }
    printf("The value of n = %d\n", n); // display the value of n
    return 0; // end the program
}
