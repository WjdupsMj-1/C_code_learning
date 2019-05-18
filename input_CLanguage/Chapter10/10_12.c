#include<stdio.h>
void NUMBER(double(*NUM)[5]);
double AVR(double *);
double AVR_A(double (*NUM)[5]);
double MAX(double (*NUM)[5]);
void PRINT(double*, double, double);

int main(void)
{
	double num[3][5] = {}; 
	double avr[3] = {};
	double avr_a, max;
	int i;
	char ch;

	do{
	NUMBER(num);
	for (i = 0; i < 3; i++)
		avr[i] = AVR(num[i]);
	avr_a = AVR_A(num);
	max = MAX(num);
	PRINT(avr, avr_a, max);
	while(getchar() != '\n');
	printf("enter q to quit\n");
	ch = getchar();
	}while(ch != 'q');

	return 0;
}

void NUMBER(double(*NUM)[5] )
{
	int i, j;

	printf("Enter a 3x5 class:\n");
	for(i = 0; i< 3; i++){
		printf("Enter a row:\n");
		for (j = 0; j < 5; j++){
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

double AVR(double *NUM)
{
	double avr = 0, sum = 0;
	int i;
	
	for(i = 0; i < 5; i++)
		sum += NUM[i];
	avr = sum / 5;
//	printf("Average of Class %d = %5f.\n", index, avr);

	return avr;
}

double AVR_A(double(*NUM)[5])
{
	double avr = 0, sum = 0;
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			sum += NUM[i][j];
	avr = sum / (3 * 5);

	return avr;
}

double MAX(double(*NUM)[5])
{
	double max = 0;
	int i, j;
	
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			if(max < NUM[i][j])
				max = NUM[i][j];

	return max;
}

void PRINT(double *AVR, double AVR_A, double MAX_A)
{
	int i;

	for (i = 0; i < 3; i++)
		printf("the average for Class %d is %5f.\n", i+1, AVR[i]);
	printf("the average for all is %5f.\n", AVR_A);
	printf("the max is %5f.\n", MAX_A);
	
	return;
}
