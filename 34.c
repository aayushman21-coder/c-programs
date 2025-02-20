#include <stdio.h>

int main() {
    char name[100];
    char marital_status;
    printf("Enter the name: ");
    scanf("%s", name);

    printf("Enter the marital status (U for Unmarried, M for Married): ");
    scanf(" %c", &marital_status);
    if (marital_status == 'U' || marital_status == 'u') {
        printf("Miss %s\n", name);
    } else if (marital_status == 'M' || marital_status == 'm') {
        printf("Mrs. %s\n", name);
    } else {
        printf("Invalid marital status entered.\n");
    }

    return 0;
}

