//C Program to find the sum of digits of a number until a single digit is occurred.
#include <stdio.h>
int main()
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0 || sum > 9)
    {
        if (num == 0)
        {
            num = sum;
            sum = 0;
        }
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}