#include <stdio.h>

int main(void)
{
	int i=1;
	while(i==1)
	{
		int num;
		int result=0;
		int s=0;
		int k;
		
		printf("Please input the number : ");
		scanf("%d", &num);
		for(k=1; k<=num; k++)
		{
			if(k*k==num)
				result=1,s=k;
		}
		if(result==1)
			printf("%d is the square number of %d\n",num,s);
		else
			printf("%d is not square number.\n",num);
		printf("Try again? [yes<1>,no<2>]\n");
		scanf("%d", &i);
	}
	printf("Good Bye");
	
	return 0;	
}
