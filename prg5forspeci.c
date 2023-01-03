//format specifier & constant 
#include<stdio.h>
int main()
{   
    const float PI = 3.14159; //constant 
	float a= 20.23;
	float b= 15.3569;
	float c= 27.93176;
	char  d= 'V';
	char e[]= "Viru";
	int  f = 17;
	float i = 2117.3579135;
//	PI = 2.3; (if we cant declare PI value as const then here it will be get changed)
	printf("%f\n",PI);
	printf("%f\n",a);
	printf("%-10.3f\n",b);//left align(decrese gap)
	printf("%10.4f\n",c);// min field width(gap)
	printf("%.7f\n",i);//deci. precision(how many deci want to print)
	printf("%c\n",d);
	printf("%s\n",e);
	printf("%d\n",f);
	
	return 0;
}
