//C program to convert a string to sentence case.
#include <stdio.h>
int main()
{
    char str[100], *ptr;
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    ptr = str;
    if (*ptr >= 'a' && *ptr <= 'z')
    {
        *ptr = *ptr - 32;
    }
    ptr++;
    while (*ptr != '\0')
    {
        if (*ptr == '.' || *ptr == '?' || *ptr == '!')
        {
            ptr++;
            if (*ptr == ' ')
            {
                ptr++;
                if (*ptr >= 'a' && *ptr <= 'z')
                {
                    *ptr = *ptr - 32;
                }
            }
        }
        else
        {
            if (*ptr >= 'A' && *ptr <= 'Z')
            {
                *ptr = *ptr + 32;
            }
            ptr++;
        }
    }
    printf("Sentence case string is: %s\n", str);
    return 0;
}