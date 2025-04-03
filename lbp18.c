#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("enter a value ");
	scanf("%f",&a);
	printf("enter b value");
	scanf("%f",&b);
	printf("enter c value");
	scanf("%f",&c);
	s=(a+b+c)/2;
	a=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%f\n",a);
	return 1;
}
