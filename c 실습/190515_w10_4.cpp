#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
void displayIntro()
{
	printf("You are in a land full of dragons. In front of you,\n");
	printf("you see two caves. In one cave, the dragon is friendly \n");
	printf("an will share his treasure. The other dragon\n");
	printf("is greedy an hungry, an will eat you on sight\n");
	printf("\n");
	
	return;
}

void checkcave(int chosenCave)
{
	printf("you approach the cave\n");
	Sleep(2000);
	printf("a large dragon jumps out in front of you he open his jaws and ...\n");
	Sleep(2000);
	srand(time(NULL));
	int f=rand()%2+1;
	if (chosenCave==f)
	{
		printf("Gives you his treasure\n");
	}
	else
	{
		printf("Gobbles you down in one bites\n");
	}
	return;
}



int main(void)
{
	char playagain[5] = {"yes"};
	while (strcmp(playagain,"yes")==0)
	{
		displayIntro();
		int n;
		scanf("%d",&n);
		checkcave(n);
		printf("Do you want to play again?");
		
		scanf("%s",&playagain);
		
	}
	return 0;
}
