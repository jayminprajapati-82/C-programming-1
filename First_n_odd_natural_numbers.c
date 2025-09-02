#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);
    for(i = 1; i <= n; i++)
        printf("%d ", 2*i - 1);
    return 0;
}
