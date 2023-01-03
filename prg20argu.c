// arguments & parametersm
#include<stdio.h>

void birthday( char name [], int age)//also write char x instead of name & y instead of age but then also replace them from down
{
	printf("happy birthday dear %s !",name);//down means here
	printf("\nyou are now %d years old!",age);// & here
}
int main()
{
	char name[] = "Viru";
	int age = 19;
	birthday(name ,age);//anything youare passing to a function is arugument ex. name,age
	
	return 0;
}
