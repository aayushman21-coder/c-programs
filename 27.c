#include <stdio.h>

int main() {
    int num1, num2, num3;
    int count;

    printf("Enter three integers: ");
    count = scanf("%d %d %d", &num1, &num2, &num3);
    printf("You entered %d inputs.\n", count);

    return 0;
}

