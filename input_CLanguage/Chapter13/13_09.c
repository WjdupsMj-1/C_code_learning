#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 40
#define SIZE 256
int main(void)
{
	FILE *fp;
	char words[SIZE][MAX];
	int i = 0;

	if((fp = fopen("words", "a+")) == NULL)
	{
		fprintf(stdout, "Can't open\"words\" file.\n");
		exit(1);
	}
	puts("Enter words to add to the file: press the Enter");
	puts("key at the begining of a line to terminate.");
	while(gets(words[i]) != NULL && words[i][0] != '\0'){
		fprintf(fp, "%s ", words[i]);
		i++;
	}
	puts("File contents: ");
	rewind(fp);
	i = 0;
	while(fscanf(fp, "%s", words[i++]) == 1)
		printf("%d: %s\n", i, words[i - 1]);
	if(fclose(fp) != 0)
		fprintf(stderr, "Erro closing file\n");


	return 0;
}
