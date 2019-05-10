#include<stdio.h>
#include<ctype.h>
double power(double , int);

int main(void)
{
	double num = 0;
	double ret = 0;
	int time = 0;
	char ch = 0;

	while(1){	
	printf("please enter a number to power:\n");
	scanf("%lf",&num);
	printf("please enter a power time:\n");
	scanf("%d", &time);

	ret = power(num, time);
	printf("the resule is %f\nPress q to quie:\n", ret);
	scanf("%c",&ch);
	if(ch == 'q' || ch == 'Q')
	break;
	
	}
	return 0;
}

double power(double inter, int times)
{
	double result = inter;
	int i;
	if(times > 0)
		for(i = 1; i < times; i++)
		result *= inter;
	else if(times == 0)
		result = 1;
	else
		for(i = -1; i < -times; i++)
		result *= 1 / inter; 
	
	return result;
}
