#include <stdio.h>

int main(void){
	int arr[3], *p,*q;
	p = arr;
	q = p + 3;
	printf("%d",q-p);
	printf("%d", (int) q- (int)p);
	
}
