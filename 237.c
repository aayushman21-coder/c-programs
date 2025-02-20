#include <stdio.h>

int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    } else if (b > 0) {
        return a + multiply(a, b - 1);
    } else {
        return -multiply(a, -b);
    }
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("The product of %d and %d is: %d\n", num1, num2, multiply(num1, num2));

    return 0;
}

