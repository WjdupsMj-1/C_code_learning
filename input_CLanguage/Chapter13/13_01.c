#include<stdio.h>
#include<stdlib.h>
#define SLEN 81
int main(void)
{
	int ch;
	FILE *fp;
	long count = 0;
	int argc;
	char argv[SLEN];
	
	printf("Enter the file name: ");
	argc = scanf("%s",argv);
	
	if(argc != 1)
	{
		printf("Usage: %s filename\n", argv);
		exit(1);
	}
	if((fp = fopen(argv, "r")) == NULL)
	{
		printf("Can't open %s\n", argv);
		exit(1);
	}
	while((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %ld characters\n", argv, count);
	return 0;
}
