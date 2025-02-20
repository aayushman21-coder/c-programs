//Printing an address of a variable in C

#include<stdio.h>
int main()
{	
	int *p;
	int a;
	p=&a;
//Without using pointer
	printf("%ld\n",&a);
	
	//Using a pointer
	printf("%ld",p);
	
	return 0;
}
