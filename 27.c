#include <stdio.h>

int main() {
    int i, ctr;

    // Prompt user for input
    printf("Input number of terms: ");
    scanf("%d", &ctr);

    // Print the cube of each number
    for (i = 1; i <= ctr; i++) {
        printf("Number is : %d and cube of the %d is : %d\n", i, i, i * i * i);
    }

    return 0;
}
