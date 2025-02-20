#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, sum = 0, n = 0;
    
    originalNum = num;
    
    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
    
    originalNum = num;
    
    // Calculate the sum of the n-th powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }
    return (num == sum);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Armstrong numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}

