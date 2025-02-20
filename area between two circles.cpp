#include<stdio.h>
#include<conio.h>
#define pi 3.1418
int main()
{
	float r1,r2,area1,area2,area;
	printf("Enter the radius of inner and outer circle");
	scanf("%f %f",&r1,&r2);
	area1=pi*r1*r1;
	area2=pi*r2*r2;
	area=area2-area1;
	printf("The area betwen two circles is %.2f",area);
	getch();
	return 0;
}
