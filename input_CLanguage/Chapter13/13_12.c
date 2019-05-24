#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ROWS 20
#define COLS 30
#define MAX 90
static int num[ROWS][COLS];
static char grey[ROWS][COLS + 1];
void UNI(void);

int main(int argc, char *argv[])
{
	FILE *fp;
	char *ch;
	char c = 0;

	if(argc != 2){
		fprintf(stderr, "Usage file name.\n");
		exit(1);}
	if((fp = fopen(argv[1], "r")) == NULL){
		fprintf(stderr, "Error opening \"%s\" file.\n", argv[1]);
		exit(2);}
	for(int i = 0; i < ROWS; i++)
		for(int j = 0; j < COLS; j++)
			while((c = fgetc(fp)) != ' ' && c != '\n')
					num[i][j] = (int)c;
	if(fclose(fp))
		fprintf(stderr, "Error closing file.\n");
	UNI();
	for(int i = 0; i < ROWS; i++)
		printf("%s\n", grey[i]);

	return 0;
}

void UNI(void)
{
	extern int num[ROWS][COLS];
	extern char grey[ROWS][COLS + 1];
	int i = 0, j = 0;
	for(i = 0; i < ROWS; i++)
		for(j = 0; j < COLS; j++)
			grey[i][j] = (num[i][j] + 33);
	for(i = 0; i < ROWS; i++)
		grey[i][COLS] = 0;

	return;
}
