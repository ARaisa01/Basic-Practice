#include <stdio.h>

int main() {
    int num, i, flag = 0;

    // Prompt user for input
    printf("Input any number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    // Change flag to 1 for non-prime number
    if (num == 0 || num == 1)
        flag = 1;

    // Check for prime number using a for loop
    for (i = 2; i <= num / 2; ++i) {
        // If num is divisible by i, then num is not prime
        // Change flag to 1 for non-prime number
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    // Flag is 0 for prime numbers
    if (flag == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
