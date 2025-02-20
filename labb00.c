#include <stdio.h>
#include <conio.h>
#define pi 3.1415
#define multiply(a,b)(a*b)
#define sum(a,b)(a+b)
#define sub(a,b)(a-b)
#define div(a,b)(a/b)


int main (){ 
float a,b;
	printf ("enter the number ");
scanf (" %f %f",&a,&b);	
printf (" multiply is %f ",pi*multiply(a,b));
printf (" sum is %f ",pi*sum(a,b));
printf (" sub is %f ",pi*sub(a,b));
printf (" divide is %f ",pi*div(a,b));
}
