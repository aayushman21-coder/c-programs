#include <stdio.h>

int isPunctuation(char ch) {
    if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || 
        (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isPunctuation(ch)) {
        printf("The character '%c' is a punctuation mark.\n", ch);
    } else {
        printf("The character '%c' is not a punctuation mark.\n", ch);
    }

    return 0;
}

