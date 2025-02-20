#include <stdio.h>

long long sumOfSeries(int n) {
    long long sum = 0;
    long long term = 1;
    
    for(int i = 1; i <= n; i++) {
        sum += term;
        term = term * 10 + 1;
    }
    
    return sum;
}

int main() {
    int n;

    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    printf("The sum of the series is: %lld\n", sumOfSeries(n));

    return 0;
}

