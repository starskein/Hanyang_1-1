#include <stdio.h>
#define N 7

float mean(int arr[],const int n);

int main(void){
	int arr[N] = {1,2,3,4,5,6,7};
	float arr2[N] = {1,2,3,4,5,6,7};
	double arr3[N] = {1,2,3,4,5,6,7};
	printf("sizeof(arr)=%d\n",sizeof(arr));
	printf("sizeof(arr2)=%d\n",sizeof(arr2));
	printf("sizeof(arr3)=%d\n",sizeof(arr3));
	printf("avg(arr)=%.2f\n",mean(arr,N));
	
	return 0;
}

float mean(int arr[],const int n){
	int i;
	float total = 0;
	for( i=0; i<n; i++)
		total += arr[i];
	float avg = total/n;
	return avg;
	
}
