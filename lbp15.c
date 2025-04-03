#include<stdio.h>
int main()
{
	float r,h,v;
	float constant=3.14;
	printf("enter r value:");
	scanf("%f",&r);
	printf("enter h value:");
	scanf("%f",&h);
	v=0.33*3.14*r*r*h;
	printf("%f\n",v);
	return 1;
}
