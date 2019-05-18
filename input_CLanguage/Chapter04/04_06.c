#include<stdio.h>
#include<float.h>
int main(void)
{
	double a = 1.0/3.0;
	float b = 1.0/3.0;
	
	printf("%.4f ,\n%.4f\n", a, b);
	printf("%.12f ,\n%.12f\n", a, b);
	printf("%.16f ,\n%.16f\n", a, b);
	printf("%d, %d\n",FLT_DIG,DBL_DIG);
	return 0;
}

