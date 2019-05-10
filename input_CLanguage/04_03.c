#include<stdio.h>

int main(void)
{
	float a;
	printf("please enter a float number:\n");
	scanf("%f",&a);
	printf("a.the input is %3.1f or %2.1e.\n",a,a);
	printf("b.the in put is %+5.3f or %4.3E.\n",a,a);

	return 0;
}
