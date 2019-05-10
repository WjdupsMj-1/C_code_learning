#include<stdio.h>

double SUM1(int n);
double SUM2(int n);

int main(void)
{
	int times;
	double sum1, sum2;

	printf("Enter the times you want to culcate:\n");
	while(1){
	scanf("%d", &times);
	if(times <= 0)
	break;
	else
	sum1 = SUM1(times);
	sum2 = SUM2(times);
	printf("the sum1 = %.4f, the sum2 = %.4f\n", sum1, sum2);
	printf("Enter next time(0 to quit)\n");
	}
	return 0;
}

double SUM1(int n)
{
	double sum = 0;
	int i;
	
	for(i = 1; i <= n; i++)
		sum += (1 / (double)i);

	return sum; 
}

double SUM2(int n)
{
	double sum = 0;
	int i;
	for(i = 1; i <= n; i++)
		if(i % 2 == 1)
			sum += (1 / (double)i);
		else
			sum -= (1 / (double)i);
	return sum;
}
