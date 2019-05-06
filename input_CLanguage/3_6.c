#include<stdio.h>
#define M 3.0e-23
#define QUOTA 950
int main (void)
{
	double quotas;
	double number;
	printf("please enter the quotas:\n");
	scanf("%lf", &quotas);
	number = quotas * QUOTA * M;
	printf("there are %e etoms in the water!\n", number);
	return 0;
}
