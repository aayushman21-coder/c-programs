//155.	C program to count the number of leading zeros in a binary number
#include <stdio.h>
int main()
{
    unsigned int num;
    int count = 0;
    printf("Enter a number: ");
    scanf("%u", &num);
    while (!(num & 0x80000000))
    {
        count++;
        num <<= 1;
    }
    printf("The number of leading zeros is: %d\n", count);
    return 0;
}