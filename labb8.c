#include<stdio.h>
int main()
{
  int a,b,s=0,i;
  printf (" enter x and n");
  scanf (" %d %d", &a,&b);
  
  for (i=1;i<=b;i++){
  	s=s+pow(a,i);
  }

printf ("  sum is %d",s);
return 0;
}