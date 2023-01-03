//logical operator (AND)
#include<stdio.h> 
#include<stdbool.h>
int main ()
{
	int temp;
	bool sunny // = false;
	printf("enter temp :");
	scanf("%d",&temp);
    printf("\nenter weather sunny or not (1 , 0) : ");// if you want to give input in true you have to give directly
	scanf("%d",&sunny);
	
	if(temp>= 0 && temp <= 37 && sunny)
	{
		printf("\nweather is good!");
	}
	else
	{
		printf("weather is bad ");
	}
}
