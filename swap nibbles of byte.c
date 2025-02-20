
#include <stdio.h>
int main()
{
    unsigned char num, swapped_num;
    printf("Enter a number: ");
    scanf("%x", &num);
    swapped_num = ((num & 0x0F) << 4) | ((num & 0xF0) >> 4);
    printf("The number after swapping nibbles: %X\n", swapped_num);
    return 0;
}