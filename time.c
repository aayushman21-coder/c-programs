#include <stdio.h>

int main() {
    int a, b, c;

    printf("enter time in hh:mm:ss format: ");
    scanf("%d:%d:%d", &a, &b, &c);

    printf("time entered: %02d:%02d:%02d\n", a, b, c);

    return 0;
}