#include <stdio.h>
#include <conio.h>
int main ()
{ int x=2,z=4;


printf (" 1. x++ + ++x = %d ", (x++) + (++x));
 x=2,z=4;
printf ("2.  ++x + ++x = %d ", (++x) + (++x));
 x=2,z=4;
printf ("3.  ++x + ++x + ++x = %d ", ((++x) + (++x)) + (++x));
x=2;
z=4;
printf ("4. %d",x>z?x:z);

x=2;
z=4;

printf ("\n");
printf ("5 . %d",x&&z);

printf ("\n");
printf ("6 . %d",x>>2 + z<<1);

 return 0;
}
