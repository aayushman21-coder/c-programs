#include <stdio.h>

int isDigit(char ch) {
    if (ch >= '0' && ch <= '9') {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isDigit(ch)) {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is not a digit.\n", ch);
    }

    return 0;
}

