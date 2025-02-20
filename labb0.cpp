#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number ");
	scanf("%d",&a);
	if (a%5==0 && a%7==0)
	{
		printf("The number is divisible by 5 and 7");
	}
	else 
	{ 
	printf("The entered number is not divisible by 5 and 7");
	}
	
	return 0;
}
