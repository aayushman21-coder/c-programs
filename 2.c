#include <stdio.h>

int main() {
    int num1, num2, difference;

    
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);


    difference = num1 - num2;

    printf("Difference = %d\n", difference);

    return 0;
}

