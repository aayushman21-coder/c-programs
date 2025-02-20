#include <stdio.h>
#include <conio.h>

int main() {
char ch;
printf("enter the character ");
ch = getch();
printf("You pressed for getch %c \n", ch);

printf("enter the character\n ");
ch = getche();
printf("You pressed for getche %c \n", ch);

char a[20];

printf("enter the character ");
 gets(a);
printf("You pressed for gets  and print from puts\n");
puts (a);


return 0;
}
