#include <stdio.h>

void square(double dvar,double *pdvar);

int main(void){
	double dvar;
	double dvarsq;
	double *pdvar = &dvarsq;
	printf("User input: ");
	scanf("%lf",&dvar);
	square(dvar ,pdvar);
	printf("*pdvar: %lf\n",*pdvar);
}

void square(double dvar, double *pdvar){
	double dvarsq;
	dvarsq = dvar*dvar;
	*pdvar= dvarsq;
	printf("Squared number: %lf\n",dvarsq);
	return;
}
