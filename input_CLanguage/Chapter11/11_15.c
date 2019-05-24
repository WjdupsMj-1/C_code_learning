#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char* argv[])
{
	FILE *fp;
	int ch;
	int i;
	char *com[3] = {"-p", "-u", "-l"};
	if(argc != 3){
		printf("Wrong enter!\n");
		return 0;
	}
	if((fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", argv[1]);
		exit(1);
	}
	if(strcmp(argv[2], com[0]) == 0){
		while((ch = getc(fp)) != EOF){
			putchar(ch);
		}
	}
	else if(strcmp(argv[2], com[1]) == 0){
		while((ch = getc(fp)) != EOF){
			putchar(toupper(ch));
		}
	}
	else if(strcmp(argv[2], com[2]) == 0){
		while((ch = getc(fp)) != EOF){
			putchar(tolower(ch));
		}
	}
	else
		printf("Wrong command!\n");
	if(fclose(fp) != 0){
		fprintf(stderr, "Error closing file.\n");
		exit(2);
	}
	printf("\nBye!\n");

	return 0;
}
