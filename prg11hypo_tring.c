//hypotenuse of right andled triangle
#include<stdio.h>
#include<math.h>
int main()
{
	float side1,side2,hypotenuse;
	
	printf(" enter side1 ");
	scanf("%f",&side1);
//	printf("side1 of triangle is %f",side1);
	
	printf(" \nenter side2 ");
	scanf("%f",&side2);
//	printf("side1 of triangle is %f",side2);
	
	hypotenuse = sqrt(side1*side1 + side2*side2);
	printf("\nhypotenuse of tringle is %f",hypotenuse);
	return 0;
	
	
}
