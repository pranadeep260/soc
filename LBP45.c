#include<stdio.h>
int main()
{
	int a,b,res;
	printf("enter any value of a:");
	scanf("%d",&a);
	printf("enter any value of b:");
	scanf("%d",&b);
	res=(a-b)*(a-b);
	printf("res=%d\n",res);
	return 1;
}