#include <stdio.h>

int main() {
    unsigned int hexValue;
    printf("Enter a hexadecimal value : ");
    scanf("%x", &hexValue);
    printf("You entered: %x (hexadecimal), %d (decimal)\n", hexValue, hexValue);

    return 0;
}

