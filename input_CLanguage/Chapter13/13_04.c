#include<stdio.h>
#include<stdlib.h>
#define files 81
int main(int argc, char* argv[])
{
	FILE *fp;
	int ch;
	int i = 0;
	if(argc < 2)
	{
		printf("enter more files.\n");
		exit(1);
	}
	for(i = 1; i < argc; i++)
	{
		if((fp = fopen(argv[i], "r")) == NULL)
		{
			printf("Can't open %s\n", argv[i]);
			continue;
		}
		while((ch = getc(fp)) != EOF)
			putc(ch, stdout);
		printf("\n");
		fclose(fp);
	}
	printf("Above is %d documents.\n", i - 1);
	return 0;
}
