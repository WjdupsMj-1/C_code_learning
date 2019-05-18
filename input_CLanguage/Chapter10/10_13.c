#include<stdio.h>
void NUMBER(int rows, int cols, double(*NUM)[cols]);
double AVR(int cols, double *);
double AVR_A(int rows, int cols, double (*NUM)[cols]);
double MAX(int rows, int cols, double (*NUM)[cols]);
void PRINT(int rows, double*, double, double);

int main(void)
{	
	int row = 3;
	int col = 5;
	double num[row][col]; 
	double avr[row];
	double avr_a, max;
	int i;
	char ch;

	do{
	NUMBER(row, col, num);
	for (i = 0; i < row; i++)
		avr[i] = AVR(col, num[i]);
	avr_a = AVR_A(row, col, num);
	max = MAX(row, col, num);
	PRINT(row, avr, avr_a, max);
	while(getchar() != '\n');
	printf("enter q to quit\n");
	ch = getchar();
	}while(ch != 'q');

	return 0;
}

void NUMBER(int rows, int cols, double(*NUM)[cols] )
{
	int i, j;

	printf("Enter a %dx%d class:\n", rows, cols);
	for(i = 0; i< rows; i++){
		printf("Enter a row:\n");
		for (j = 0; j < cols; j++){
			while(!scanf("%lf", &NUM[i][j])){
				printf("Enter again for this item:\n");
				while(getchar() != '\n');
			}
		}
		printf("Last row is %.3f %.3f %.3f %.3f %.3f\n",
		NUM[i][0], NUM[i][1], NUM[i][2], NUM[i][3], NUM[i][4]);
	}
	
	return;

}

double AVR(int cols, double *NUM)
{
	double avr = 0, sum = 0;
	int i;
	
	for(i = 0; i < cols; i++)
		sum += NUM[i];
	avr = sum / cols;
//	printf("Average of Class %d = %5f.\n", index, avr);

	return avr;
}

double AVR_A(int rows, int cols, double(*NUM)[cols])
{
	double avr = 0, sum = 0;
	int i, j;
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			sum += NUM[i][j];
	avr = sum / (rows * cols);

	return avr;
}

double MAX(int rows, int cols, double(*NUM)[cols])
{
	double max = 0;
	int i, j;
	
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			if(max < NUM[i][j])
				max = NUM[i][j];

	return max;
}

void PRINT(int rows, double *AVR, double AVR_A, double MAX_A)
{
	int i;

	for (i = 0; i < rows; i++)
		printf("the average for Class %d is %5f.\n", i+1, AVR[i]);
	printf("the average for all is %5f.\n", AVR_A);
	printf("the max is %5f.\n", MAX_A);
	
	return;
}
