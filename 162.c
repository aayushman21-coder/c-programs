#include <stdio.h>

int main() {
    char letter = 'a';
    printf("Lowercase alphabet letters:\n");
    while (letter <= 'z') {
        printf("%c ", letter);
        letter++;
    }
    printf("\n");

    return 0;
}

