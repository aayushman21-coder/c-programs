#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Enter time in HH:MM:SS format: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);
    printf("You entered: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}

