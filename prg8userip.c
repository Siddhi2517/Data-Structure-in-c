// user i/p 1) scanf 2)fgets
#include<stdio.h>
int main()
{
	char name[50] ;
	int age;
	
	printf("your name :");
	scanf("%s",&name); // this function doenot read the data after space
//	fgets(name,50,stdin); // use this funct if you want to print data after space
	printf("hello %s , how old are you?\n",name);
	
	printf("your age :");
	scanf("%d",&age);
	printf("i am %d years old .",age);
	return 0;
		
}
