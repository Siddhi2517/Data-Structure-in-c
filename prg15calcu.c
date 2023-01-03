// proram to made calculater 
#include<stdio.h>
int main()
{
	char Operator;
	double num1,num2,result;
	
	printf("Enter an operator (+,-,*,/): ");
	scanf("%c",&Operator);
	printf("\nenter numbers : ");
	scanf(" %lf %lf",&num1,&num2);
	
	switch(Operator)
	{
		case '+':
			result = num1 + num2;
			printf("\nresult = %.2lf",result);
			break;
		case '-':
		    result = num1 - num2;
			printf("\nresult = %.2lf",result);
			break;	
		case '*':
			result = num1 * num2;
			printf("\nresult = %.2lf",result);
			break;
		case '/':
		    result = num1 / num2;
			printf("\nresult = %.2lf",result);
			break;
		default :
		    printf("%c is not valid operator ");			
	}
	return 0;
}
