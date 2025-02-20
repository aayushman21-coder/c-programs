#include<stdio.h>
int main()
{
  int i,a,s=1;
  
    printf("Enter any integer: ");
  scanf("%d", &a);
  
   for (i=1;i<=a;i++)
   {
   	
  s=s*i;
   }
   
   printf (" factorial is %d",s);
   return 0;
}