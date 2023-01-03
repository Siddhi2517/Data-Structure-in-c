#include<stdio.h>

int main()
{
	int num = 0 ;
	int sum = 0 ;
	
	do
	{
		printf("no above 0 ");
		scanf("%d",&num);
		if (num > 0)
		{
			sum += num ;
		}
	}
	while( num > 0);
	printf("sum of no. %d",sum);
}

