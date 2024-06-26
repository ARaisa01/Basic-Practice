#include <stdio.h>

int main() {
    int n, i, j;
    n = 5; // The maximum number of stars in the middle of the diamond

    // Upper half of the diamond
    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for(i = 1; i <= n - 1; i++) {
        // Print leading spaces
        for(j = 1; j <= i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= (2 * (n - i) - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
