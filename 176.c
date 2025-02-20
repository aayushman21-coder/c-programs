#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Leap years from 1 to %d are:\n", n);
    for (int year = 1; year <= n; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
        }
    }
    printf("\n");

    return 0;
}

