#include<stdio.h>

int main()
{
	int a=99;
	double b=3.33;
	void *vptr;
	
	vptr = &a;
	
	printf("a=%d", (*(int*)vptr));
	
	
	vptr=&b;
	printf("\nb=%lf", (*(double*)vptr));
	
	return 0;
}
