#include <stdio.h>

int main() {
    int rows, i, j;

    // Prompt user for input
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the right-angled triangle pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
