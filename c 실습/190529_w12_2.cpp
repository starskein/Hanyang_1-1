#include <stdio.h>

int main(void){
	double arr[5] = {1,2,3,4,5};
	
	
	printf("&arr[0]=%p, arr=%p\n",&arr[0],arr);
	printf("&arr[1]=%p, arr+1=%p\n",&arr[1],arr+1);
	printf("&arr[2]=%p, arr+2=%p\n",&arr[2],arr+2);
	
	printf("arr[0] = %lf, *arr = %lf\n",arr[0],*arr);
	printf("arr[1] = %lf, *arr + 1 = %lf\n",arr[1],*arr+1);
	printf("arr[2] = %lf, *arr + 2 = %lf\n",arr[2],*arr+2);
	
	return 0;
	
}
