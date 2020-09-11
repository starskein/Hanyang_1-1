#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(void){
	int real[3] = {0,0,0};
	real[0] = rand() % 9 + 1;
	do{
		real[1] = rand() % 9 + 1;
	}while(real[0]==real[1]);
	do{
		real[2] = rand() % 9 + 1;
	}while(real[0]==real[2] or real[1]==real[2]);
	
	while(1){
		char guess[4];
		int strike=0,ball=0;
		int i,j;
		printf("Guess the numbers:");
		scanf("%s",guess);
		for (i=0;i<3;i++){
			for (j=0;j<3;j++){
				if (real[i]==guess[j]-'0'){
					if (i==j)
						strike++;
					else
						ball++;
				}
			}
		}
		if (strike==3){
			char playagain[]="yes";
			printf("Yes! The secret number is \"%d%d%d\"! You have won!\n",real[0],real[1],real[2]);
			printf("Do you want to play again? (yes or no)\n");
			scanf("%s",playagain);
			if (strcmp(playagain,"yes")!=0)
				break;	
			else{
				real[0] = rand() % 9 + 1;
				do{
					real[1] = rand() % 9 + 1;
				}while(real[0]==real[1]);
				do{
					real[2] = rand() % 9 + 1;
				}while(real[0]==real[2] or real[1]==real[2]);
			}	
		}
		else{
		
			printf("%d strike, %d ball\n",strike,ball);
			printf("=========================\n");
		}
	}
	
}
