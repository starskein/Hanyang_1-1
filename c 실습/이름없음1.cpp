#include <stdio.h>

int main(void){
	int a[3][4] = {{1,4,5,6},{10,20,30,40},{7,9,5,4}};
	
	printf("%d",*(*a+4));
}
