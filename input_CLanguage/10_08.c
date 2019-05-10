#include <stdio.h>
#define ROWS 3
#define COLS 5
double _target(int rows, int cols, double source1[rows][cols],double source2[rows][cols]);
double print(int rows, int cols, double source[rows][cols]);
int main(void)
{
	int rows = ROWS;
	int cols = COLS;

	double source[ROWS][COLS] = {
	{1.1,2.2,3.3,4.4,5.5},
	{6.6,7.7,8.8,9.9,10.0},
	{11.11,12.12,13.13,14.14,15.15}
	};
	double target[rows][cols];
	double (*p)[COLS];
	
	printf("the source class is:\n");
	print(rows,cols,source);

	_target(rows,cols,source,target);
	print(rows,cols,target);

	return 0;
}

double _target(int rows, int cols, double source1[rows][cols], double source2[rows][cols])
{
	int i, j;
	double (*ptr)[cols];
	ptr = source1;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
		source2[i][j] = ptr[i][j];
	return source2[rows][cols];
}

double print(int rows, int cols, double source[rows][cols])
{
printf("this class is :\n");
	int i, j;
	for (i = 0; i < rows; i++)
		{
		for (j = 0; j < cols; j++)
		printf ("%6.2lf",source[i][j]);
		}
	printf("\n");
printf("\n\n");
	return 0;
}
