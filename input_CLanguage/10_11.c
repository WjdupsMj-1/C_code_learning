#include<stdio.h>
#include<ctype.h>
#define NUM 3
#define ROWS 3
#define COLS 5

void SCAN(double (*ptr)[ROWS][COLS], int num);
double AVER_N(double (*ptr)[ROWS][COLS], int n);
double AVER(double (*ptr)[ROWS][COLS]);
double MAX(double (*ptr)[ROWS][COLS]);
void PRINT(double, double, double, double, double);

int main(void)
{
	double class[NUM][ROWS][COLS] = {};
	double adv[NUM];
	double (*ptr)[ROWS][COLS];
	double *ad;
	double max, ad_a;
	int num = NUM;
	int rows = ROWS;
	int cols = COLS;
	int i;
	ptr = class;
	ad = adv;

	printf("please enter three 3x5 class for computerint:\n");
	SCAN(ptr, num);
	for(i = 0; i < num; i++)
	ad[i] = AVER_N(ptr,i);
	ad_a = AVER(ptr);
	max = MAX(ptr);
	PRINT(ad[0], ad[1], ad[2], ad_a, max);
	
	return 0;
}

void SCAN(double (*ptr)[ROWS][COLS], int num)
{	
	int i, j, k, m;
	for (i = 0; i < num; i++){
	printf("Items for class %d:\n",i + 1);
		for (j = 0; j < ROWS; j++){
			printf("Please enter items for row %d\n", j + 1);
			for(k = 0; k < COLS; k++)
			scanf("%lf",&ptr[i][j][k]);
		}
	}
	return;
}

double AVER_N(double(*ptr)[ROWS][COLS], int n)
{
	double aver_n = 0;
	double sum = 0;
	int i, j;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			sum += ptr[n][i][j];
	aver_n = sum / (ROWS * COLS);
	return aver_n;
}

double AVER(double(*ptr)[ROWS][COLS])
{
	double aver;
	double sum = 0;
	int i, j, k;
	for (i = 0; i < NUM; i++)
		for (j = 0; j < ROWS; j++)
			for (k = 0; k < COLS; k++)
			sum += ptr[i][j][k];
	aver = sum / (NUM * ROWS * COLS);
	return aver;
}

double MAX(double(*ptr)[ROWS][COLS])
{
	double max = 0;
	int i, j, k;
	for (i = 0; i < NUM; i++)
		for (j = 0; j < ROWS; j++)
			for (k = 0; k < COLS; k++){
			if (ptr[i][j][k] > max)
			max = ptr[i][j][k];
			}
	return max;
}

void PRINT(double ad1, double ad2, double ad3, double ada, double max)
{
	printf("\nThe adverage of Class 1 is :%f\n", ad1);
	printf("The adverage of Class 2 is :%f\n", ad2);
	printf("The adverage of Class 3 is :%f\n", ad3);
	printf("The adverage of Class A is :%f\n", ada);
	printf("The max of all elements is: %f\n", max);
	return;
}
