#include <stdio.h>

int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Input number of terms to display: ");
    scanf("%d", &n);

    printf("Here is the Fibonacci series upto to %d terms:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
