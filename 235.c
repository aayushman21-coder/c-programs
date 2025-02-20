#include <stdio.h>

int reverseNumber(int num, int reversed) {
    if (num == 0) {
        return reversed;
    } else {
        return reverseNumber(num / 10, reversed * 10 + num % 10);
    }
}

int main() {
    int num, reversed;

    printf("Enter an integer: ");
    scanf("%d", &num);

    reversed = reverseNumber(num, 0);
    printf("The reversed number is: %d\n", reversed);

    return 0;
}

