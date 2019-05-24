#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 90
#define EN '\n'
void PRINT(char *str, FILE *file);

int main(int argc, char *argv[])
{
	FILE *fp;
	char *str;
	if(argc < 2){
		fprintf(stderr, "Usage file name:\n");
		exit(1);
	}
	else if(argc > 3){
		fprintf(stderr, "More arguments than expected.\n");
		exit(2);
	}
	else
	{
		str = argv[1];
		if((fp = fopen(argv[2], "r")) == NULL){
			fprintf(stderr, "Can't open %s file.\n", argv[2]);
			exit(3);
		}
		printf("BELOW are lines contain %s:\n\n", str);
		PRINT(str, fp);
		if(fclose(fp))
			fprintf(stderr, "Error Closing.\n");
	}
	return 0;
}

void PRINT(char *str, FILE *file)
{
	char *line;
	int i = 0;	
	char ch[MAX];
	while((line = fgets(ch, MAX, file)) != NULL)
	{
		if(strstr(line, str) != NULL){
			printf("%s", line);
			i++;
		}
	}
	if(i == 0)
		printf("there is no %s in this file.\n", str);

	return;
}
