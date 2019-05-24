#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LENS 80
long print(char ch, FILE *file);
int main(void)
{
	static char ch1, ch2;
	FILE *file1, *file2;
	long i = 0L, j = 0L;
	char fe1[LENS], fe2[LENS];
	int sta1, sta2;

	printf("please enter the file name 1: ");
	gets(fe1);
	if((file1 = fopen(fe1, "rb")) == NULL){
		fprintf(stderr,"Can't open %s file.\n", fe1);
		exit(1);
	}
	printf("please enter the file name 2: ");
	gets(fe2);
	if((file2 = fopen(fe2, "rb")) == NULL){
		fprintf(stderr, "Can't open %s file.\n", fe2);
		exit(2);
	}
	ch1 = 12, ch2 = 12;
	while((ch1 = getc(file1)) != EOF || (ch2 = getc(file2)) != EOF){
		if((sta1 = fseek(file1, i, SEEK_SET)) == 0)
			i = print(ch1, file1);
		if((sta2 = fseek(file2, j, SEEK_SET)) == 0)
			j = print(ch2, file2);
	}
	if(ch1 == EOF)
		fclose(file1);
	if(ch2 == EOF)
		fclose(file2);
	printf("\nabove is all the documents from \"%s\" and \"%s\".\n\n", fe1, fe2);
	return 0;
}

long print(char ch, FILE *file)
{
	long position;
	while(1){
		ch = getc(file);
		if(ch == EOF)
		break;
		putchar(ch);
		if(ch == '\n')
		break;
	}
	position = ftell(file);
	return position;
}
