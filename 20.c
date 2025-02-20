#include <stdio.h>

int main() {
    int num1, num2, hcf, temp;
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    hcf = num1;
    printf("HCF = %d\n", hcf);

    return 0;
}

