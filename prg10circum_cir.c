//circumference of circle & area of circle
#include<stdio.h>
int main()
{
	const float PI = 3.14159;
	float r,circumference ,area;
	printf(" enter radius of circle :");
	scanf("%f",&r);
	//printf("radius of circle is %f\n",r);
	
	circumference = 2*PI*r;
	area= PI*r*r;
	printf("circumference of circle is %f\n",circumference);
	printf("area of circle is %f",area);
	return 0;
}
