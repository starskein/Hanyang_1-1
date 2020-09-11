#include <stdio.h>

int main(void){
	int arr_1d[12]={10,20,30,40,50,60,70,80,90,100,110,120};
	int arr_2d[3][4];
	
	int i,j;
	int cnt=0;
	for (i=0;i<3;i++){
		for (j=0;j<4;j++){
			arr_2d[i][j]=arr_1d[cnt];
			cnt += 1;
		}
	}
	for (i=0;i<3;i++){
		for (j=0;j<4;j++){
			printf("%d ",arr_2d[i][j]);		
		}
		printf("\n");
	}
	cnt=0;
	for (i=2;i>=0;i--){
		for (j=3;j>=0;j--){
			arr_1d[cnt]=arr_2d[i][j];
			cnt += 1;
		}
	}
	for (i=0;i<12;i++)
		printf("%d ",arr_1d[i]);
}
