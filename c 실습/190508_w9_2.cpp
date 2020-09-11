#include <stdio.h>

int main (void)
{
	int num;
	printf("Input dan.\n");
	scanf("%d",&num);
	int mul = 1;
	while(mul<10)
	{
		printf("%d*%d=%d\n",num,mul,num*mul);
		mul=mul+1;
	}
}
