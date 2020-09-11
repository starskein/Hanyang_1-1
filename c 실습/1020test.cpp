#include <stdio.h>
int main()
{
	int i = 1;
	double d = 1.2;
	int* pi = &i;
	double* pd = &d;
	printf("pi: %d, pi+1: %d, pi+2: %d\n", pi, pi+1, pi+2);
	printf("pd: %d, pd+1: %d, pd+2: %d\n", pd, pd+1, pd+2);
	return 0;
}
