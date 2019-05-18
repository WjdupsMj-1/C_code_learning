#include<stdio.h>
#define ROWS 3
#define COLS 5

void print(int (*class)[COLS], int rows);
void doub(int (*class)[COLS], int rows);

int main(void)
{
	int CLASS[ROWS][COLS] = {{1, 2, 3, 4, 5},
					   {6, 7, 8, 9, 0},
					   {11, 12, 13, 14, 15}};
	int (*class)[COLS];
	class = CLASS;
	int rows = ROWS;
	int cols = COLS;
	print(class, rows);
	doub(class, rows);
	print(class, rows);

	return 0;
}

void print(int (*class)[COLS], int rows)
{
	int i, j;
	for(i = 0; i < rows; i++){
		for(j = 0; j < COLS; j++)
		printf("%d ", class[i][j]);		
		printf("\n");
	}
	return;
}

void doub(int (*class)[COLS], int rows)
{
	int i, j;
	for(i = 0; i < rows; i++){
		for(j = 0; j < COLS; j++)
		class[i][j] *= 2;
	}
	return;

}
