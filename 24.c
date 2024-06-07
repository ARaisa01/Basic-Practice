#include <stdio.h>

int main() {
    int number, i;
    long long factorial = 1;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calculate factorial using a for loop
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Print the result
    printf("Factorial of %d = %lld\n", number, factorial);

    return 0;
}
