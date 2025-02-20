#include <stdio.h>

int main() {
    int number;
    char choice;

    do {
     
        printf("Enter an integer: ");
        scanf("%d", &number);

        if (number > 0) {
            printf("The number %d is positive.\n", number);
        } else if (number == 0) {
            printf("The number %d is zero.\n", number);
        } else {
            printf("The number %d is negative.\n", number);
        }

        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

