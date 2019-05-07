#include<stdio.h>
void larger_of(double *, double *);

int main(void)
{
	double x, y;

	printf("please enter a number for x:\n");
	scanf("%lf", &x);
	printf("please enter a number for y:\n");
	scanf("%lf", &y);

	larger_of(&x, &y);
	
	printf("after lager: x = %4f ; y = %4f\n", x, y);

return 0;
}

void larger_of(double * x, double * y)
{
	if (*x > *y)
		* y = * x;
	else 
		* x = * y;
	return;		
}
