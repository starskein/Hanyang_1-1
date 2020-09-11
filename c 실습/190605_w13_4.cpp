#include <stdio.h>
#include <string.h>
void claps(void);
int check(char *arr);
int count(char *c, char x);
int main(void){
	claps();
}

void claps(void){
	int num,i;
	printf("Please input the last number\n");
	scanf("%d",&num);
	printf("------- start -------\n");
	for (i=1;i<=num;i++){
		char temp[5];
		sprintf(temp,"%d",i);
		if (check(temp)==0)
			printf("%d\n",i);
		else{
			int k=0;
			while(k<check(temp)){
				printf("clap");
				k++;
			}
			printf("\n");
		}
		
	}
	return;
}

int check(char *arr){
	int num=0;
	int three = count(arr,'3');
	int six = count(arr,'6');
	int nine = count(arr,'9');
	num= three + six + nine;
	
	return num;
}

int count(char *c, char x){
	int i,count;
	count=0;
	for(i=0;c[i]!='\0';i++){
		if(c[i]==x)
			count++;
		
	}
	return count;
}
