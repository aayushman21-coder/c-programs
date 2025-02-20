#include <stdio.h>

int main() {
    int num, cube;

    printf("Enter an integer: ");
    scanf("%d", &num);
    cube = num * num * num;
    printf("Cube of %d is %d\n", num, cube);

    return 0;
}

