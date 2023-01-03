// || (OR) operator program to chek weather is good
#include<stdio.h>
int main()
{
	float temp;
	printf ("enter temperature : ");
	scanf("%f",&temp);

    if (temp<=0 || temp >= 37)
       printf("weather is bad ");
    
	else 
	   printf("weather is good! ");
	   
	return 0;       
}
