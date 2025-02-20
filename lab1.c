#include<stdio.h>
#include<ctype.h>
int main() {
char ch;
printf("Enter a character: ");
scanf("%c", &ch);

if(isalnum(ch) == 0)
    printf("%c is not alphanumeric\n", ch);
else
    printf("%c is alphanumeric\n", ch);

if(isblank(ch) == 0)
    printf("%c is not a blank character\n", ch);
else
    printf("%c is a blank character\n", ch);


if(isalpha(ch) == 0)
    printf("%c is not an alphabet\n", ch);
else
    printf("%c is an alphabet\n", ch);


if(isdigit(ch) == 0)
    printf("%c is not a number-digit\n", ch);
else
    printf("%c is a number-digit\n", ch);


if(isupper(ch) == 0)
    printf("%c is not uppercase\n", ch);
else
    printf("%c is uppercase\n", ch);


if(islower(ch) == 0)
    printf("%c is not a lowercase character\n", ch);
else
    printf("%c is a lowercase character\n", ch);


if(iscntrl(ch) == 0)
    printf("%c is not a control character\n", ch);
else
    printf("%c is a control character\n", ch);


if(isxdigit(ch) == 0)
    printf("%c is not a hexadecimal digit\n", ch);
else
    printf("%c is a hexadecimal digit\n", ch);


if(isgraph(ch) == 0)
    printf("%c is not a graphical character\n", ch);
else
    printf("%c is a graphical character\n", ch);

return 0;
}
