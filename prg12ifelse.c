//if ,else,else if statements
#include<stdio.h>
int main()
{
	int age;
	printf("enter your age ");
	scanf("%d", &age);
	
	if(age<18)
	{
		printf("you are not allowed");
	}
	else if (age>18)
	{
		printf("you are allowed");
	}
	else 
	{
		printf("you are just complited 18");
	}
	return 0;
}
