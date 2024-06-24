#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;
    printf("Input a number to check whether it is a Strong number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;

        // Calculate factorial of remainder
        int factorial = 1;
        for(int i = 1; i <= remainder; ++i) {
            factorial *= i;
        }

        sum += factorial;
        originalNum /= 10;
    }

    if (sum == num)
        printf("%d is a Strong number.", num);
    else
        printf("%d is not a Strong number.", num);

    return 0;
}
