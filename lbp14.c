#include<stdio.h>
int main()
{
	float n,s;
	printf("enter a value of n");
	scanf("%f",&n);
	s=n*(n+1)*(2*n+1)/6;
	printf("%f",s);
	return 1;
}
