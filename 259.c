#include <stdio.h>

void printString(char str[]) {
    printf("The string is: %s\n", str);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); 

    printString(str);

    return 0;
}

