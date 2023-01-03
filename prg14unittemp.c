// program to convert f to c or cto f
/*#include<stdio.h>
#include<ctype.h>
int main()
{
	char unit;
	float temp;
	   printf("Is the temp is in (F) or (C)? :");
	   scanf("%c",&unit);
	   
	unit = toupper(unit); 
	
	if(unit == 'C')
	{
		printf(" currently temp is in C \n");
	}
	else if (unit == 'F')
	{
		printf("currently temp is in F \n");
	} 
	else 
	{
		printf("%c is not valid unit",unit);
	}  
	return 0;
} */
#include<stdio.h>
int main()
{
	char unit;
	float temp;
	   printf("Is the temp is in (F) or (C)? :");
	   scanf("%c",&unit);
	
	if(unit == 'C')
	{
		printf("\nEnter temp in celcius : ");
		scanf("%f",&temp);
		temp = (temp*9/5)+32;
		printf("temp in farenheit : %.1f",temp);
	}
	else if (unit == 'F')
	{
		printf("\nEnter temp in farenheit : ");
		scanf("%f",&temp);
		temp= (temp - 32)*5/9;
		printf("temp in celcius : %.1f",temp);
	} 
	else 
	{
		printf("%c is not valid unit",unit);
	}  
	return 0;
}
