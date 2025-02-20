#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i,j;
    char c={'A'}; 
    for ( i = 0; i <5 ; i++)
    {
        for ( j= i; j <4 ; j++)
    {

        printf (" ");
    }
       for ( j = -i; j <=i; j++)
       {
       printf ("%c",c+abs(j));
       
       }
       printf ("\n");
    }}