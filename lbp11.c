#include<stdio.h>
int main()
{
	float a,area;
	printf("enter any one side");
	scanf("%f",&a);
	a=(sqrt(3))/4*a*a;
	printf("area os equilateral triangle is %f",a);
	return 1;
}
