#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2, GCD, LCM;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    GCD = gcd(num1, num2);
    LCM = (num1 * num2) / GCD;

    printf("The GCD of %d and %d is %d\n", num1, num2, GCD);
    printf("The LCM of %d and %d is %d\n", num1, num2, LCM);

    return 0;
}
