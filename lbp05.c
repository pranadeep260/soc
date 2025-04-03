#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1,r2;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	printf("enter c value");
	scanf("%d",&c);
	r1=((-b+sqrt(b*b-4*a*c))/2*a);
	r2=((-b-sqrt(b*b-4*a*c))/2*a);
	printf("r1=%f\n",r1);
	printf("r2=%f\n",r2);
	return 1;
}   
