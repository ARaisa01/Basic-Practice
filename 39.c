#include <stdio.h>

int main() {
    int num, i, sum = 0;
    printf("Input the number: ");
    scanf("%d", &num);

    printf("The positive divisors: ");
    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
            printf("%d ", i);
        }
    }
    printf("\nThe sum of the divisors is: %d\n", sum);

    if(sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}
