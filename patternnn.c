#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,c;
    for ( i = 1; i <=5 ; i++)
    { 

     for ( j = 1; j <= i; j++)
      {
       printf ("%d",j);
       }
       
    

        for ( j= 10; j >2*i ; j--)
    {

        printf (" ");
    }
 for ( j = i; j >= 1; j--)
     {
       printf ("%d",j);
       }
       printf ("\n");
    }
}

