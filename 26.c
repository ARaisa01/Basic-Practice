#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    // Prompt user for input
    printf("Input num: ");
    scanf("%lld", &num);

    // Calculate the number of digits using a while loop
    while (num != 0) {
        num /= 10; 
        ++count;
    }

    // Print the result
    printf("Number of digits: %d\n", count);

    return 0;
}
