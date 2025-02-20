#include <stdio.h>

char toUppercase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    } else {
        return ch; 
    }
}

int main() {
    char ch, upperCh;
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);
    upperCh = toUppercase(ch);
    printf("Uppercase character: %c\n", upperCh);

    return 0;
}

