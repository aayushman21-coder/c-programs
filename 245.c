#include <stdio.h>

double sumOfSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (i * (i + 1)) / (double)(i + 2);
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The sum of the series is: %.10f\n", sumOfSeries(n));

    return 0;
}

