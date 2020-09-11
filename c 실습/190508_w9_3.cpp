#include <stdio.h>

int main (void)
{
	int n=5,m=1;
	while(n>0)
	{
		int i=1;
		while(i<n)
		{
			i=i+1;
			printf("  ");
		}
		int k=0;
		while(k<m)
		{
			printf("* ");
			k=k+1;
		}
		printf("\n");
		m=m+2;
		n=n-1;
	}
	return 0;
}
