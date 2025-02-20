#include <stdio.h>

int main() {
    int num1, num2, sum;
    float average;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    average = (float)sum / 2;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

