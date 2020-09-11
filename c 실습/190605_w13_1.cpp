#include <stdio.h>

int main(void){
	int arr_2d[3][4] = {{10,20,30,40},{50,60,70,80},{90,100,110,120}};
	int i,j;
	for (i=0;i<3;i++)
	{
		for(j=0;j<4;j++){
			printf("arr_2d[%d][%d] = %d\n",i,j,arr_2d[i][j]);
			
		}
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<4;j++){
			printf("*(*(arr+%d)+%d) = %d\n",i,j,*(*(arr_2d+i)+j));
			
		}
	}
	return 0;
}
