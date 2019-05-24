#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40
int main(void)
{
	FILE *in, *out;
	int ch;
	char name[LEN];
	int count = 0;
	char *name_in;

	printf("Enter the in name: ");
	gets(name_in);
	if((in = fopen(name_in, "r")) == NULL){
	fprintf(stderr, "I couldn't open the file \"%s\"\n",
			name_in);
	exit(1);
	}
	strcpy(name, name_in);
	name_in = strcat(name, ".red");
	if((out = fopen(name, "w")) == NULL){
		fprintf(stderr, "Can't creat out put file.\n");
		exit(2);
	}
	while((ch = getc(in)) != EOF){
		if(count++ % 3 == 0)
			putc(ch, out);
	}
	if(fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Erro in closing files\n");

	return 0;
}
