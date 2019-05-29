#include<stdio.h>
#include<stdlib.h>
#define SIZE 40
double fun1(double so);
double fun2(double so);
double fun3(double so);
void transform(const double source[SIZE], double target[SIZE], int amount, double (*p)(double));

int main(void)
{
	double source[SIZE];
	for(int i = 0; i < SIZE; i++)
		source[i] = i * 2.23;
	double target[SIZE] = {};
	int amount = 20;
	double (*pf[3])(double so);
	pf[0] = fun1;
	pf[1] = fun2;
	pf[2] = fun3;
	for(int i = 0; i < 3; i++){
	transform(source, target, amount, pf[i]);
	for(int j = 0; j < amount; j++)
		printf("so%2d = %8.2f, ta%2d = %8.2f.\n", j, source[j], j, target[j]);
	printf("\n\n");
	}

	return 0;
}

double fun1(double so)
{
	double ta;
	ta = so * 3;
	return ta;
}
double fun2(double so)
{
	double ta;
	ta = so * 6;
	return ta;
}
double fun3(double so)
{
	double ta;
	ta = so * 4;
	return ta;
}
void transform(const double source[SIZE], double target[SIZE], int amount, double (*p)(double)){
	int i = 0;
	for(i = 0; i < amount; i++)
		target[i] = p(source[i]);
	return;
}
