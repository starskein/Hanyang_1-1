#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	char line[1000];
	char line_c;
	int i;
	FILE*fp;
	fp =fopen("article.txt","r");
	int wordnum=0;
	while (!feof(fp))
	{
		char a[100];
		fscanf(fp,"%s",a);
		wordnum=wordnum+1;
	}
	printf("num of words:%d",wordnum);
	return 0;
}
