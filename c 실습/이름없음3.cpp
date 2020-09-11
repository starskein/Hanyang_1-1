#include <stdio.h>

const int a = 3;
int main(void){
	int * p;
	p = &a;
	*p=5;
	printf("%d",a);
}
