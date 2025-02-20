#include <stdio.h>

int sumOfSeries(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= i;  
        } else {
            sum += i;  
        }
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The sum of the series is: %d\n", sumOfSeries(n));

    return 0;
}

