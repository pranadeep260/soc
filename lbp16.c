#include<stdio.h>
int main()
{
   float L,res;
   char from[10],to[10];
	scanf("%f",&L);
	scanf("%s%s",from,to);
	if((strcmp(from,"meters")==0)&&(strcmp(to,"feet")==0))
	{
		res=L*3.28084;
		printf("%.2f",res);
	}
	else if ((strcmp(from,"kilometers")==0)&&(strcmp(to,"miles")==0))
	{
		res=L*0.621371;
		printf("%.2f",res);
	}
	else if ((strcmp(from,"feet")==0)&&(strcmp(to,"meters")==0))
	{
		res=L*0.3048;
		printf("%.2f",res);
	}
	return 1;	
}
