#include <stdio.h>

int isUppercase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isUppercase(ch)) {
        printf("The character '%c' is an uppercase letter.\n", ch);
    } else {
        printf("The character '%c' is not an uppercase letter.\n", ch);
    }

    return 0;
}

