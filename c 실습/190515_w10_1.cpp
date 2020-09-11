#include <stdio.h>

int main(void)
{
	int n;
	int m=1;
	scanf("%d",&n);
	
	while (m<=n)
	{
		if (m==1)
		{
			int k=0;
			while (k<2*(n-m))
			{
				printf(" ");
				k=k+1;
			}
			printf("*\n");
			m=m+1;
		}
		if (m==n)
		{
			int l=1;
			while (l<2*m)
			{
				printf("* ");
				l=l+1;
			}
			break;
		}
		if (m!=1 and m!=n)
		{
			int k=0,l=1;
			while (k<2*(n-m))
			{
				printf(" ");
				k=k+1;
			}
			printf("*");
			while(l<4*(m-1))
			{
				printf(" ");
				l=l+1;
			}
			printf("*\n");
			m=m+1;
		}
	}
	return 0;
}
