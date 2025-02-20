#include<stdio.h>
#include <conio.h>
void main()
{ int a[100],i,j,b,temp;
printf("enter the size of the number");
scanf ("%d",&b);
printf ("enter the number");
for ( i = 0; i < b; i++)
{
scanf ("%d",&a[i]);
}

for ( i = 0; i < b; i++)
{
  for ( j= 0; j < b; j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;

   }
  }
  
}
for ( i = 0; i < b; i++)
{ printf ("%d \t",a[i]);
}
}
