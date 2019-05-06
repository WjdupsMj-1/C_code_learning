#include<stdio.h>
#define ROWS 10
#define COLS 30
void chline (char ch, int i, int j, char class[ROWS][COLS]);

int main(void)
{
	char ch = 0;
	int x;
	int i = 0;
	int j = 0;
	char _class[ROWS][COLS] = {};
	char (*p)[COLS];
	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++)
			_class[i][j] = '*';
	}
	printf("\nplease enter the code that you want to print:\n");
	scanf("%c", &ch);
	printf("please enter i col you want to start:\n");
	scanf("%d", &i);
	printf("please enter j col you want to end:\n");
	scanf("%d", &j);
	for (x = 0; x < COLS; x++)
	printf("%4d",x);
	printf("\n");
	
	chline(ch, i - 1, j - 1, _class);
	
	return 0;
}

void chline(char ch, int i, int j, char class[ROWS][COLS])
{
	int a,b;
	char (*q)[COLS];
	
	q = class;
	printf("The original formate is as below:\n\n");
	for (a = 0; a < ROWS; a++){
		for (b = 0; b < COLS; b++)
			printf("%4c", q[a][b]);
			printf("\n");
	}
	for (a = 0; a < ROWS; a++)
		for (b = i; b <= j; b++)
			q[a][b] = ch;
	
	printf("\n\nThe changed formate is as below:\n\n");
	for(a = 0; a < ROWS; a++){
		for (b = 0; b < COLS; b++)
			printf("%4c", q[a][b]);
			printf("\n");
		}
return;
}
