#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float numbers[100], sum = 0, mean, variance = 0, std_deviation;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d real numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }
    mean = sum / n;
    for (i = 0; i < n; i++) {
        variance += pow(numbers[i] - mean, 2);
    }
    variance = variance / n;
    std_deviation = sqrt(variance);
    printf("Mean = %.2f\n", mean);
    printf("Variance = %.2f\n", variance);
    printf("Standard Deviation = %.2f\n", std_deviation);

    return 0;
}

