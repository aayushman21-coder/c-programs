#include <stdio.h>

int main() {
    char letter;
    printf("Uppercase alphabet letters:\n");
    for (letter = 'A'; letter <= 'Z'; letter++) {
        printf("%c ", letter);
    }
    printf("\n");
    printf("Lowercase alphabet letters:\n");
    for (letter = 'a'; letter <= 'z'; letter++) {
        printf("%c ", letter);
    }
    printf("\n");

    return 0;
}

