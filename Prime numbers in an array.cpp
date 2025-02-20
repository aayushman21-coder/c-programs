//C program to check prime numbers in an array

#include<stdio.h>

void check(int n)
{
int i,count=0;
for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		count++;
	}

	}
		if(count==2)
	{
		printf("%d\t",n);
	}	
}

int main()
{
	int i,a[5];
	printf("Enter five numbers: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The prime numbers in array are:\n");
	for(i=0;i<5;i++)
	{
		check(a[i]);
	}
}
