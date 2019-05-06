#include <stdio.h>

int main(void)
{
	float a;
	printf("please enter a float number\n");
	scanf("%f", &a);
	printf("the input is %.6f, or %e,\n", a, a);
	return 0;
}
