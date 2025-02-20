#include <stdio.h>

int countDigits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return 1 + countDigits(num / 10);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("The number of digits is: 1\n");
    } else {
        
        printf("The number of digits is: %d\n", countDigits(num));
    }

    return 0;
}

