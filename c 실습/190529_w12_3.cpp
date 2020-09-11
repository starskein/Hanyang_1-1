#include <stdio.h>

int sum(int *ar,int n);
int getMax(int *ar, int n);
int getMin(int *ar, int n);

int main(void){
	double arr[5] = {1,2,3,4,5};
	double *ptr = NULL;
	
	ptr = &arr[0];
	int m = 7;
	int *ptr2 = &m;
	int arr2[9] = {1,2,3,4,5,6,7,8,9};
	int *ptr3 = arr2;
	int arr3[5] = {3,1,2,5,4};
	int *ptr4 = arr3;
	printf("ptr=%p, &arr[0]=%p, arr=%p\n",ptr,&arr[0],arr);
	printf("ptr+2=%p, &arr[2]=%p, arr+2=%p\n",ptr+2,&arr[2],arr+2);
	
	printf("*ptr = %lf, arr[0] = %lf, *arr = %lf\n",*ptr,arr[0],*arr);
	printf("*ptr+2 = %lf, arr[2] = %lf, *arr+2 = %lf\n",*ptr+2,arr[2],*arr+2);
	printf("ptr2=%p, *ptr2=%d\n",ptr2,*ptr2);
	*ptr2 = 10;
	printf("after change m=%d\n",m);
	int i;
	for (i=0;i<9;i++)
		printf("%d ",*(ptr3+i));
	printf("\n");
	for (i=8;i>=0;i--)
		printf("%d ",*(ptr3+i));
	printf("\n");
	printf("sum of arr2 = %d\n",sum(arr2,9));
	printf("arr3 max=%d\n",getMax(arr3,5));
	printf("arr3 min=%d\n",getMin(arr3,5));
	
	return 0;
}

int sum(int *ar,int n){
	int i;
	int total = 0;
	for (i=0; i<n; i++)
		total += *(ar+i);
	return total;
}

int getMax(int *ar, int n){
	int max = *ar;

    for (int i = 1; i < n; i++)
    	if (*(ar+i) > max) max = *(ar+i);

	
	return max;
	}

int getMin(int *ar, int n){
	int min = *ar;

    for (int i = 1; i < n; i++)
    	if (*(ar+i) < min) min = *(ar+i);

	
	return min;
}
