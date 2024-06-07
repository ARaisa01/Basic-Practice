#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt user for input
    printf("Input the number: ");
    scanf("%d", &n);

    // Print the first n natural numbers
    printf("\nThe first %d natural numbers are:\n", n);

    for ( int i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i; // Calculate the sum
    }

    // Print the sum of natural numbers
    printf("\nThe Sum of Natural Numbers up to %d terms: %d\n", n, sum);

    return 0;
}
