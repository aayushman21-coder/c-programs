//C Program to find sum of first N natural number, N must be taken by the user.
#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum of first %d natural numbers is %d.\n", n, sum);
    return 0;
}