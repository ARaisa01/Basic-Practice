
#include <stdio.h>
int main() {
    int num, i;

    // Prompt user for input
    printf("Input num: ");
    scanf("%d", &num);

    // Print multiplication table using a for loop
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
