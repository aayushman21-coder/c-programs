#include <stdio.h>

int main() {
    char letter = 'A';

    printf("Uppercase alphabet letters:\n");
    while (letter <= 'Z') {
        printf("%c ", letter);
        letter++;
    }
    printf("\n");

    return 0;
}

