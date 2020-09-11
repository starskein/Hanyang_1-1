#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
float add_func(float, float);
float minus_func(float, float);
float mult_func(float, float);
float div_func(float, float);
float mod_func(float, float);
float exp_func(float, float);

int main(void)
{
	float op1, op2, result;
	char op[1];
	FILE *fp; 
    fp =fopen("test.txt", "w"); 
    if (!fp) return 1;
	printf("============================\n");
	fprintf(fp,"============================\n");
	printf("operator: +, -, *, /, %, ^\n");
	fprintf(fp,"operator: +, -, *, /, %, ^\n");
	printf("============================\n");
	fprintf(fp,"============================\n");
	printf("operand >> ");
	fprintf(fp,"operand >> ");
	scanf("%f",&op1);
	fprintf(fp,"%.2f\n",op1);
	int cnt=0;
	while(1)
	{
		
		printf("operator >> ");
		fprintf(fp,"operator >> ");
		scanf("%s",&op);
		fprintf(fp,"%s\n",op);
		printf("operand >> ");
		fprintf(fp,"operand >> ");
		scanf("%f",&op2);
		fprintf(fp,"%.2f\n",op2);
		if (strcmp(op,"+")==0)		
			op1=add_func(op1,op2);
		else if (strcmp(op,"-")==0)
			op1=minus_func(op1,op2);
		else if (strcmp(op,"*")==0)
			op1=mult_func(op1,op2);
		else if (strcmp(op,"/")==0)
			op1=div_func(op1,op2);
		else if (strcmp(op,"%")==0)
			op1=mod_func(op1,op2);
		else if (strcmp(op,"^")==0)
			op1=exp_func(op1,op2);
		
		printf("result >> %.2f\n",op1);
		fprintf(fp,"result >> %.2f\n",op1);
		cnt=cnt+1;
		if (cnt==6)
			break;
		
	}
	fclose(fp);
	return 0;
}


float add_func(float a, float b)
{
	return a+b;
}

float minus_func(float a, float b)
{
	return a-b;
}

float mult_func(float a, float b)
{
	return a*b;
}

float div_func(float a, float b)
{
	return a/b;
}

float mod_func(float a, float b)
{
	
	return (int)a%(int)b;
	///modular operator cannot be defined with float operands. need type casting (float -> int)
}

float exp_func(float a, float b)
{
	return pow(a,b);
}
