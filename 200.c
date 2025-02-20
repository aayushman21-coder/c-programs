
#include <stdio.h>
int main()
{
    char str1[100], str2[100], *ptr1, *ptr2;
    int count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str1);
    ptr1 = str1;
    ptr2 = str2;
    while (*ptr1 != '\0')
    {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
        count++;
    }
    *ptr2 = '\0';
    printf("Copied string is: %s\n", str2);
    printf("Number of characters copied: %d\n", count);
    return 0;
}