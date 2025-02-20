//C program to check given number is divisible by A and B
#include<stdio.h>
int main()
{
    int num, a, b;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter two numbers A and B: ");
    scanf("%d %d", &a, &b);
    if(num % a == 0 && num % b == 0)
    {
        printf("%d is divisible by both %d and %d\n", num, a, b);
    }
    else
    {
        printf("%d is not divisible by both %d and %d\n", num, a, b);
    }
    return 0;
}
