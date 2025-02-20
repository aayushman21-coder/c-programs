
#include <stdio.h>
int main()
{
    char str[100], ch;
    int i = 0, freq = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            freq++;
        }
        i++;
    }
    printf("Frequency of character '%c' = %d\n", ch, freq);
    return 0;
}