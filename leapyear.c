#include<stdio.h>
int main()
{
  int a;
  printf(" enter the year to check ");
  scanf("%d", &a);

  if(a%4==0 ||(a%100==0 || a%400==0))
  {
  	printf (" this given year is leap year");
  }
    else 
    printf (" this given year is  not leap year");
     return 0;
 }