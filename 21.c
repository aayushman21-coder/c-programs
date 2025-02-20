#include <stdio.h>

int main() {
    int num1, num2, product = 0;
    int i;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    for (i = 0; i < abs(num2); i++) {
        product += num1;
    }

    if (num2 < 0) {
        product = -product;
    }
    printf("Product = %d\n", product);

    return 0;
}

