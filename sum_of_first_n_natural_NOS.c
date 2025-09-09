#include <stdio.h>

int main() {x
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Using loop to calculate sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
