#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Address of num: %p\n", &num);

    return 0;
}

