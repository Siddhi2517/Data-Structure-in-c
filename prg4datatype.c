// datatypes
#include<stdio.h>
#include<stdbool.h>// to print boolean type of data ex true false 
int main()
{
	int a = 21;
	float b = 23.357815;
	double c = 17.2357813962;// if we want print all decimal write 0.-- how many decimal you want ex.%0.10lf
	char d = 's';
	char e[] = "Siddhi";
	bool f = true;// for false it will print 0
	
	printf("%d\n",a);
	printf("%f\n",b);
	printf("%0.10lf\n",c);// refer upper comment for (0.10)
	printf("%c\n",d);
	printf("%s\n",e);
	printf("%d",f);
	
	return 0;
}
