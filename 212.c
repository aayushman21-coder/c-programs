#include <stdio.h>

int main() {
    char str[100];
    int sum = 0;

    printf("Enter an alphanumeric string: ");
    gets(str); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
        }
    }

    printf("The sum of all digits in the string is: %d\n", sum);

    return 0;
}

