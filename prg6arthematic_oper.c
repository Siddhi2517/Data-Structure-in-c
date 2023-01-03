//arthematic operators 
#include<stdio.h>
int main()
{
	int x = 7;
	int y = 5;// for division we can write y as float here also buy if we want to keep y as int for other oper then delacre y as float down 
	int a = x + y;
	int b = x-y;
	int c = x*y;
	float d = x/(float)y;// if we want ans in decimal 
	int e = x%y;
	x++; //* doubt
	//++x;
	y--; // *doubt
	//--y;
	
	printf("additio : %d\n",a);
	printf("subtraction : %d\n",b);
	printf("multiplication : %d\n",c);
	printf("division : %f\n",d);
	printf("remainder : %d\n",e);
	printf("increment of x : %d\n",x);
	printf("decrement of y : %d\n",y);
}
