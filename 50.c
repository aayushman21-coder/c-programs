#include <stdio.h>

int main() {
    int i;

    printf("ASCII Table:\n");
    printf("Decimal\tCharacter\n");

    for (i = 0; i <= 127; i++) {
        printf("%d\t%c\n", i, i);
    }

    return 0;
}

