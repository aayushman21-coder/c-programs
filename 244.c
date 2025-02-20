#include <stdio.h>

long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double sumOfSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (i * i) / (double)factorial(i);
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

