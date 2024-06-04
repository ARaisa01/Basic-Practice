#include <stdio.h>

int main() {

   printf("The first 10 natural numbers are:\n");
    for (int i = 1; i <=10; ++i) {
        printf("%d ", i);
    }

  // Calculate the sum of the first 10 natural numbers
    int sum = 0;
    for (int i = 1; i <=10; ++i) {
        sum += i;
    }

    printf("\nThe sum is: %d\n", sum);

    return 0;
}
