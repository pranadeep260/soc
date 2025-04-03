#include<stdio.h>
int main()
{
  int s;
    printf("enter the value of s:");
	scanf("%d",&s);
	if(s>=30 && s<=50)
	{
	  printf("D character grade");	
	}	
	if(s>=51 && s<=60)
	{
	  printf("C character grade");	
	}
		if(s>=61 && s<=80)
	{
	  printf("B character grade");	
	}	
	if(s>=81 && s<=100)
	{
	  printf("A character grade");	
	}	
}