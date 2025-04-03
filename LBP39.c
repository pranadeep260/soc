#include<stdio.h>
int main()
{
	int a,m,n,x,y;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter the value of m:");
	scanf("%d",&m);
	x=m*n;
	y=pow(a,x);
	printf("%d",y);
}