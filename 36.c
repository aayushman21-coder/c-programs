#include <stdio.h>

int main() {
    int n;
    int sum;

    printf("Enter an integer n: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum of all numbers from 0 to %d is %d\n", n, sum);

    return 0;
}

