#include<stdio.h>
int main()
{
	int n,i=0,j,a[15];
	printf("enter the value of n:");
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	 printf("%d",a[j]);
}