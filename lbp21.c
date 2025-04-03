#include<stdio.h>
int main()
{
	float temp;
	printf(" enter the temp celsius:");
	scanf("%f",&temp);
	if (temp<0)
	{
		printf("freezing");
	}
	if(0<temp && temp<=20)
	{
		printf("cold");
	}
	if(21<=temp && temp<=30)
	{
		printf("moderate");
	}
	else if(temp>30)
	{
		printf("hot");
	}
	return 1; 
}
