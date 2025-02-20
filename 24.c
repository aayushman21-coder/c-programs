#include <stdio.h>

int main() {
    float feet, inches;
    printf("Enter the length in feet: ");
    scanf("%f", &feet);
    inches = feet * 12;
    printf("%.2f feet is equal to %.2f inches\n", feet, inches);

    return 0;
}

