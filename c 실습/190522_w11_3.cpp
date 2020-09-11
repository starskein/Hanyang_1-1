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
	int letternum=0,charnum=0;
	while (!feof(fp))
	{
		
		fgets(line,100,fp);

		for (i=0; i<strlen(line); i++)
		{
			line_c=line[i];
			if (isalpha(line_c))
				charnum=charnum+1;
			if (isalnum(line_c)or ispunct(line_c))
				letternum=letternum+1;
		}
	}
	
	printf("number or characters: %d\n",charnum);
	printf("num of letters: %d\n",letternum);
	fclose(fp);
	return 0;
}

