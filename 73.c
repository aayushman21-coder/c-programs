#include <stdio.h>

int main() {
    float diagonal1, diagonal2, area;
    printf("Enter the length of the first diagonal of the rhombus: ");
    scanf("%f", &diagonal1);

    printf("Enter the length of the second diagonal of the rhombus: ");
    scanf("%f", &diagonal2);
    area = 0.5 * diagonal1 * diagonal2;

    printf("The area of the rhombus is: %.2f\n", area);

    return 0;
}

