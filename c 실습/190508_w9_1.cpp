#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	int r = rand()%20+1;
	int cnt=0;
	
	while(true)
	{
		if (cnt>=6)
		{
			printf("you lose!");
			break;
		}
		
		int guess;
		printf("guess the number:");
		scanf("%d",&guess);
		cnt = cnt + 1;
		
		if (guess<r)
			printf("Low\n");
		else if (guess>r)
			printf("High\n");
		else
		{
			printf("You win! you guessed number in %d guesses\n", cnt);
			break;
		}
		
	 } 
	return 0;
}
