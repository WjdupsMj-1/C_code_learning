#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	char ch;
	FILE *fp_in;
	FILE *fp_out;
	long count = 0;
	
	if(argc != 3)
	{
		printf("Usage: %s and %s filename\n", argv[1], argv[2]);
		exit(1);
	}
	if((fp_in = fopen(argv[1], "rb")) == NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(1);
	}
	fp_out = fopen(argv[2], "wb");
	while((ch = getc(fp_in)) != EOF)
	{
		putc(ch, fp_out);
		count++;
	}
	fclose(fp_in);
	fclose(fp_out);
	printf("File %s has copied %ld chars into %s.\n",
		argv[1], count, argv[2]);
	return 0;
}
