//C program to use ternary operator

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	
	(age>18)?printf("You are an adult"):printf("you are underage");
	return 0;
}
