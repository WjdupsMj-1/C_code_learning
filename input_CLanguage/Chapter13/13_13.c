#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ROWS 20
#define COLS 30
#define MAX 90
static int num[ROWS][COLS];
static char grey[ROWS][COLS + 1];
void UNI(void);
void MASK(void);
int de(int num1, int num2);

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
	MASK();
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

void MASK(void)
{
	int i, j;
	extern int num[ROWS][COLS];
	for(i = 1; i < ROWS; i++)//中心区域检测
		for(j = 1; j < COLS; j++)
		{
			if (de(num[i][j], num[i][j + 1]) > 1 &&
				de(num[i][j], num[i][j - 1]) > 1 &&
				de(num[i][j], num[i - 1][j]) > 1 &&
				de(num[i][j], num[i + 1][j]) > 1)
				num[i][j] = (num[i][j + 1] + num[i][j - 1] + num[i + 1][j] + num[i - 1][j]) / 4;
		}
		for(i = 0, j = 1; j < COLS - 1; j++)//第一行检测
			if (de(num[i][j], num[i][j + 1]) > 1 &&
				de(num[i][j], num[i][j - 1]) > 1 &&
				de(num[i][j], num[i + 1][j]) > 1)
				num[i][j] = (num[i][j + 1] + num[i][j - 1] + num[i + 1][j]) / 3;
		for(i = 29, j = 1; j < COLS - 1; j++)//最后一行检测
			if (de(num[i][j], num[i][j + 1]) > 1 &&
				de(num[i][j], num[i][j - 1]) > 1 &&
				de(num[i][j], num[i - 1][j]) > 1)
				num[i][j] = (num[i][j + 1] + num[i][j - 1] + num[i - 1][j]) / 3;
	for(i = 1, j = 0; i < ROWS - 1; i++)//第一列检测
			if (de(num[i][j], num[i][j + 1]) > 1 &&
				de(num[i][j], num[i - 1][j]) > 1 &&
				de(num[i][j], num[i + 1][j]) > 1)
				num[i][j] = (num[i][j + 1] + num[i - 1][j] + num[i + 1][j]) / 3;
	for(i = 29, j = 0; i < ROWS - 1; i++)//最后一列检测
			if (de(num[i][j], num[i][j - 1]) > 1 &&
				de(num[i][j], num[i - 1][j]) > 1 &&
				de(num[i][j], num[i][j + 1]) > 1)
				num[i][j] = (num[i - 1][j] + num[i][j - 1] + num[i][j + 1]) / 3;
	if (de(num[0][0], num[0][1]) > 1 &&
		de(num[0][0], num[1][0]) > 1)
		num[0][0] = (num[1][0] + num[0][1]) / 2;
	if (de(num[0][29], num[1][29]) > 1 &&
		de(num[0][29], num[0][28]) > 1)
		num[0][29] = (num[1][29] + num[0][28]) / 2;
	if (de(num[29][0], num[29][1]) > 1 &&
		de(num[29][0], num[28][0]) > 1)
		num[29][0] = (num[29][1] + num[28][0]) / 2;
	if (de(num[29][29], num[28][29]) > 1 &&
		de(num[29][29], num[29][28]) > 1)
		num[29][29] = (num[29][28] + num[28][29]) / 2;
	
	return;
}

int de(int num1, int num2)
{
	int d = 0;
	if(num1 > num2)
		d = num1 - num2;
	else
		d = num2 - num1;
	return d;
}

