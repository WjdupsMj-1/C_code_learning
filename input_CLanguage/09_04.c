#include<stdio.h>
double XJ_value(double,double);

int main(void)
{
	double num1 = 0;
	double num2 = 0;
	double num_ = 0;	

	printf("please enter a value for num 1:\n");
	scanf("%lf", &num1);
	printf("please enter a value for num 2:\n");
	scanf("%lf", &num2);

	num_ = XJ_value(num1, num2);
	printf("the XJ_value for %f and %f is %f\n",num1, num2, num_);	
	
	return 0;
}	

double XJ_value(double a, double b)
{
	double num_ = 0;
	double x = 0;

	x = ((1 / a) + (1 / b)) / 2;
	num_ = 1 / x;

	return num_;
}
