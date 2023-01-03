// ! NOT operator
#include<stdio.h>
#include<stdbool.h>
int main ()
{
	bool sunny;// = false;
	printf(" enter sunny or not ");//enter value in 1 & 0
    scanf("%d",&sunny);
	
	if(!sunny)
	   printf("weather is cloudy");
	else    
	    printf("weather is sunny");
	return 0;    	 
}
	
 
