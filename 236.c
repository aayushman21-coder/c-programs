#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime using recursion
bool isPrime(int num, int divisor) {
    // Base cases
    if (num <= 1) {
        return false;
    }
    if (divisor == 1) {
        return true;
    }
    if (num % divisor == 0) {
        return false;
    }
    
    return isPrime(num, divisor - 1);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num, num / 2)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}

