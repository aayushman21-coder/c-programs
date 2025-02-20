#include <stdio.h>

int isLowercase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isLowercase(ch)) {
        printf("The character '%c' is a lowercase letter.\n", ch);
    } else {
        printf("The character '%c' is not a lowercase letter.\n", ch);
    }

    return 0;
}

