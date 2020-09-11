#include <stdio.h>

void getSumDiff(int a, int b, int*pSum, int *pDiff);

int main(void){
	int a,b;
	int sum,diff;
	int *pSum = &sum, *pDiff = &diff;
	
	printf("input a: ");
	scanf("%d",&a);
	printf("input b: ");
	scanf("%d",&b);
	getSumDiff(a,b,pSum,pDiff);
	printf("*pSum = %d, *pDiff = %d\n",*pSum,*pDiff);
}

void getSumDiff(int a, int b, int* pSum, int *pDiff){
	printf("a+b=%d\n",a+b);
	*pSum = a+b;
	if (a>b){
		printf("diff between a and b: %d\n",a-b);
		*pDiff = a-b;
	}
	else{
		printf("diff between a and b: %d\n",b-a);
		*pDiff = b-a;
	}
	return;
}
