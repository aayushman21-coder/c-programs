//159.	C program to count the number of bits to be flipped to convert a number to another number
#include <stdio.h>
int main()
{
    unsigned int num1, num2, count = 0;
    printf("Enter the first number: ");
    scanf("%u", &num1);
    printf("Enter the second number: ");
    scanf("%u", &num2);
    while (num1 || num2)
    {
        if ((num1 & 1) != (num2 & 1))
        {
            count++;
        }
        num1 >>= 1;
        num2 >>= 1;
    }
    printf("The number of bits to be flipped is: %u\n", count);
    return 0;
}