#include <stdio.h>

int isAlphanumeric(char ch) {
    if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (isAlphanumeric(ch)) {
        printf("The character '%c' is alphanumeric.\n", ch);
    } else {
        printf("The character '%c' is not alphanumeric.\n", ch);
    }

    return 0;
}

