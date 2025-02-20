#include <stdio.h>

int sumOfSeries(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n * (n + 1) / 2 + sumOfSeries(n - 1);
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The sum of the series is: %d\n", sumOfSeries(n));

    return 0;
}

