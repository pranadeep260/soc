#include<stdio.h>
int main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				printf("True");
			}else{
				printf("False");
			}
		}else{
			printf("True");
		}
	}else{
		printf("false");
	}
	
	
}
