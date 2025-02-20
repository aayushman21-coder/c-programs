#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    int choice;

    printf("Choose conversion type:\n");
    printf("1 Fahrenheit to Celsius\n");
    printf("2 Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
    
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else if (choice == 2) {
        
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

