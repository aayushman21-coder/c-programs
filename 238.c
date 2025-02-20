#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return hcf(b, a % b);
    }
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf(num1, num2));

    return 0;
}

