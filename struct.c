#include<stdio.h>
#include<string.h>

struct player
{
	char name[15];
	int score;
};
int main()
{
	struct player player1 ={ "siddhi" , 5 };
	struct player player2={ "sama" , 7 };
	
	printf("%s\n" ,player1.name);
    printf("%d\n",player1.score);
	
	printf("%s\n",player2.name);
    printf("%d\n",player2.score);
	
	
	return 0;
	
	
	
}
