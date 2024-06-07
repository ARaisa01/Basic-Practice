#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Prompt user for input
    printf("Input any number: ");
    scanf("%d", &num);

    original = num; // Store the original number

    // Reverse the number using a while loop
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the original and reversed numbers are equal
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
