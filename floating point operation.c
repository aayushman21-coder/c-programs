

#include <stdio.h>
#include <float.h>

int main() {
    
    float a = 10.5;
    float b = 3.2;
    float sum = a + b;
    float difference = a - b;
    float product = a * b;
    float quotient = a / b;

    printf("Basic Operations:\n");
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n\n", quotient);

    // Example 2: Precision issues with floating-point numbers
    float x = 0.1;
    float y = 0.2;
    float z = x + y;

    printf("Precision Issues:\n");
    printf("Expected: 0.3, Actual: %.20f\n\n", z);
    return 0;
}