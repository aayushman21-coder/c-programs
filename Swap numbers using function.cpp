//C program to swap two integer using user defined function

#include<stdio.h>
int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	printf("a=%d b=%d",x,y);
}
int main()
{
	int a,b;
	printf("Enter a and b: ");
	scanf("%d %d",&a,&b);
	
	printf("Before swap:\n");
	printf("a=%d b=%d\n",a,b);
	
	printf("After swap:\n");
	swap(a,b);
}

