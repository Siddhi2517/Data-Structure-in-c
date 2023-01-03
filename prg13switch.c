//program for switch & break - we can also do this with else if
#include<stdio.h>
int main()
{
	char grade;
	
	printf("enter your grade : ");
	scanf("%c",&grade);
	
	switch(grade)
	{	
		case 'A':
		    printf("perfect !");
		    break;
		case 'B':
		    printf("you did good");
			break;
		case 'C':
		    printf("you did okay");
			break;
		case 'D':
		    printf("at least you did not get F");
			break;
		case 'F':
		    printf("you are fail");
		    break;
		default :
		    printf("enter valid grade");
		    return 0;
    }   
		    
			 				    
}
