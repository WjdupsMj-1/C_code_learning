#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
	char ch;
	FILE *fpin, *fpout;
	long count = 0;

	if(argc != 3)
	{
		printf("Usage: %s filename.\n", argv[0]);
		exit(1);
	}
	if((fpin = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s.\n", argv[1]);
		exit(1);
	}
	if((fpout = fopen(argv[2], "w")) == NULL)
	{
		printf("Can't open %s.\n", argv[2]);
		exit(1);
	}
	while((ch = getc(fpin)) != EOF)
	{
		ch = tolower(ch);
		putc(ch, fpout);
		count++;
	}
	fclose(fpin);
	fclose(fpout);
	printf("File %s has %ld chars copied to %s.\n",
		argv[1], count, argv[2]);

	return 0;
}
