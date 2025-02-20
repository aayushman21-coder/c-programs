#include <stdio.h>

int main() {
    int num1, num2, greatest, smallest, difference;
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        greatest = num1;
        smallest = num2;
    } else {
        greatest = num2;
        smallest = num1;
    }

    difference = greatest - smallest;
    printf("Greatest number = %d\n", greatest);
    printf("Smallest number = %d\n", smallest);
    printf("Difference = %d\n", difference);

    return 0;
}

